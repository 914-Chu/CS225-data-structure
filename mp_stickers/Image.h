/**
 * @file Image.h
 * Contains your declaration of the interface for the Image class.
 */

#pragma once
#include "cs225/PNG.h"

class Image : public cs225::PNG {
    public:
        Image();
	Image(unsigned width_, unsigned height_);
	Image(const Image& other);
	~Image(){};
	
	void darken();
	void darken(double amount);
	void desaturate();
	void desaturate(double amount);
	void grayscale();
	void illinify();
	void lighten();
	void lighten(double amount);
	void rotateColor(double degrees);
	void saturate();
	void saturate(double amount);
	void scale(double factor);
	void scale(unsigned w, unsigned h);
        void setCor(unsigned x, unsigned y);	
    	unsigned getX();
	unsigned getY();
    private:
	bool closeToOrg(double degree);
	unsigned x;
	unsigned y;
};
