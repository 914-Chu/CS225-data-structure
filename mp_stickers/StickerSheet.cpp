#include "StickerSheet.h"
#include <vector>

using namespace std;
using namespace cs225;
void StickerSheet::_copy(StickerSheet const& other) {

	maximum = other.maximum;
	stickers = new Image*[maximum];
	init();
	base = new Image();
	*base = *other.base;
	size = other.size;

	for(unsigned i = 0; i < maximum; i++) {
		if(other.stickers[i] != NULL) {
			stickers[i] = new Image();
			*stickers[i] = *other.stickers[i];
		}
	}	
}

void StickerSheet::clear() {
	for(unsigned i = 0; i < maximum; i++) {
		if(stickers[i] != NULL) {
			delete stickers[i];
			stickers[i] = NULL;	
		}	
	}
	delete[] stickers;
	stickers = NULL;
	
	if(base != NULL) {
		delete base;
		base = NULL;
	}
	size = 0;
	maximum = 0;
}

StickerSheet::StickerSheet(const Image& picture, unsigned max) {
	base = new Image();
	*base = picture;
	maximum = max; 
	stickers = new Image*[maximum];
	init();
	size = 0;
}

StickerSheet::StickerSheet(const StickerSheet& other) {
	_copy(other);
}

StickerSheet::~StickerSheet() {
	clear();
}

void StickerSheet::init() {
	for(unsigned i = 0; i < maximum; i++) {
		stickers[i] = NULL;
	}
}

int StickerSheet::addSticker(Image& sticker, unsigned x, unsigned y) {
	
	if(size + 1 <= maximum){
		for(unsigned i = 0; i < maximum; i++) {
			if(stickers[i] == NULL) {
				stickers[i] = new Image();
				stickers[i]->resize(sticker.width(), sticker.height());
				for(unsigned j = 0; j < sticker.width(); j++) {
					for(unsigned k = 0; k < sticker.height(); k++) {
						HSLAPixel& np = sticker.getPixel(j, k);
						HSLAPixel& p = stickers[i]->getPixel(j, k);
						p = np;
					}
				}
				stickers[i]->setCor(x, y);
				size++;
				return i;
			}
		}
	}
	return -1;
}

void StickerSheet::changeMaxStickers(unsigned max) {
	Image** ns = new Image*[max];
	for(unsigned i = 0; i < max; i++) {
		if(i < maximum) { 
			if(stickers[i] != NULL) {
				ns[i] = stickers[i];
			}else{
				ns[i] = NULL;
			}
		}else{
			ns[i] = NULL;
		}
	}
	
	delete[] stickers;
	maximum = max;
	stickers = ns;
	size =  (max < size) ? max : size; 
}

Image* StickerSheet::getSticker(unsigned index) {
	if(index < size && stickers[index] != NULL) {
		return stickers[index];
	}else {
		return NULL;
	}

}

const StickerSheet& StickerSheet::operator= (const StickerSheet& other) {
	clear();
	_copy(other);
	return *this;
}

void StickerSheet::removeSticker(unsigned index) {
	if(index < size && stickers[index] != NULL) {
		delete stickers[index];
		stickers[index] = NULL;
	}else{
		return;
	}
}

Image StickerSheet::render() const {
	unsigned w = base->width();
	unsigned h = base->height();

	Image result;
	result.resize(w,h);

	for(unsigned i = 0; i < w; i++) {
		for(unsigned j = 0; j < h; j++) {
			HSLAPixel& bp = base->getPixel(i,j);
			HSLAPixel& rp = result.getPixel(i,j);
			
			rp = bp;
		}
	}

	for(unsigned i = 0; i < maximum; i++) {
		if(stickers[i] != NULL) {
			unsigned xst = stickers[i]->getX();
			unsigned yst = stickers[i]->getY();
			unsigned sx = xst+stickers[i]->width();
			unsigned sy = yst+stickers[i]->height();
			
			if(sx >= result.width()){
				result.resize(sx, result.height());
			}

			if(sy >= result.height()) {
				result.resize(result.width(), sy);
			}
			
			for(unsigned x = xst; x < sx; x++) {
				for(unsigned y = yst; y < sy; y++) {
					HSLAPixel& orgp = result.getPixel(x, y);
					HSLAPixel& p = stickers[i]->getPixel(x - xst, y - yst);
					if(p.a > 0){
						orgp = p;
					}
				}
			} 
		}
	}
	return result;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
	if(index < size && stickers[index] != nullptr) {
		stickers[index]->setCor(x, y);
		return true;
	}else {
		return false;
	}
}
