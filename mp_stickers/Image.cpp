#include "Image.h"
#include <cmath>

using namespace std;
using namespace cs225;

void Image::darken(){
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.l -= 0.1;
			p.l = (p.l < 0) ? 0 : p.l;
		}
	}    
}

void Image::darken(double amount){
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.l -= amount;
			p.l = (p.l < 0) ? 0 : p.l;
		}
	}
}

void Image::desaturate(){
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.s -= 0.1;
			p.s = (p.s < 0) ? 0 : p.s;
		}
	}
}

void Image::desaturate(double amount) {
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.s -= amount;
			p.s = (p.s < 0) ? 0 : p.s; 
		}
	}
}

void Image::grayscale() {
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.s = 0;
		}
	}
}

void Image::illinify() {
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.h = closeToOrg(p.h) ? 11 : 216;
		}
	}	
}

bool Image::closeToOrg(double degree) {
	int orange = (int)abs(degree - 11) % 360;
	int blue = (int)abs(degree - 216) % 360;
	int disO = orange > 180 ? (360 - orange) : orange;
	int disB = blue > 180 ? (360 - blue) : blue;
	return disO < disB;
}

void Image::lighten() {
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.l += 0.1;
			p.l = (p.l > 1) ? 1 : p.l;
		}
	}	
}

void Image::lighten(double amount) {
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.l += amount;
			p.l = (p.l > 1) ? 1 : p.l;
		}
	}
}

void Image::rotateColor(double degrees) {
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.h += degrees;
			if(p.h > 360){
				p.h = (double)((int)p.h % 360);
			}else if(p.h < 0) {
				p.h += 360; 
			}
		}
	}
}

void Image::saturate() {
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.s += 0.1;
			p.s = (p.s > 1) ? 1 : p.s;
		}
	}
}

void Image::saturate(double amount) {
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& p = getPixel(x, y);
			p.s += amount;
			p.s = (p.s > 1) ? 1 : p.s;
		}	
	}
}

void Image::scale(double factor) {
	unsigned int nW = (unsigned int)(width()*factor);
	unsigned int nH = (unsigned int)(height()*factor);
	resize(nW, nH); 
       /*	HSLAPixel* newImageData = new HSLAPixel[nW * nH];
	if(factor == 2.0){
		for(unsigned int x = 0; x < nW/2; x+=2){
			for(unsigned int y = 0; y < nH/2; y+=2) {
				HSLAPixel& old = getPixel(x/2, y/2);
				newImageData[x] = old; 
				newImageData[x+1] = old;
				newImageData[x+(y*nW)] = old;
			 	newImageDAta[x+(y*nW)+1] = old;
			}	
		}
	}else if(factor == 0.5) {
		for(unsigned int x = 0; x < nW; x++){
			for(unsigned int y = 0; y < nH; y++) {
				HSLAPixel& old = getPixel(x*2, y*2);
				newImageData[x] = old;
				
			}
		}
	}*/
}

void Image::scale(unsigned w, unsigned h) {
	unsigned int factor = (w >= h) ? width()/w : height()/h;
	unsigned int nW = (unsigned int)width()*factor;
	unsigned int nH = (unsigned int)height()*factor;
	resize(nW, nH);
}

