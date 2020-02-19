/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once
#include "Image.h"
#include "cs225/PNG.h"
#include <vector>

using namespace std;

class StickerSheet {
	
	public:
		StickerSheet(const Image& picture, unsigned max);
		StickerSheet(const StickerSheet& other);
		~StickerSheet();

		const StickerSheet& operator=(const StickerSheet& other);
		void changeMaxStickers(unsigned max);
		int addSticker(Image& sticker, unsigned x, unsigned y);
		bool translate(unsigned index, unsigned x, unsigned y);
		void removeSticker(unsigned index);
		Image* getSticker(unsigned index);
		Image render() const;
	
	private:
		Image* base;
		Image** stickers;
		unsigned maximum;
		unsigned size;
		
		void _copy(StickerSheet const& other);
		void clear();
		void init();
};
