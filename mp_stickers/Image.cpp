#include "Image.h"
#include <cmath>

using namespace std;
using namespace cs225;

Image::Image(){
	x = 0;
	y = 0;
}

Image::Image(unsigned width_, unsigned height_):PNG(width_, height_){
	x = 0;
	y = 0;
}

Image::Image(const Image& other): PNG(other){
	x = 0;
	y = 0;
}

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
	unsigned int nW = width()*factor;
	unsigned int nH = height()*factor;
	PNG org(*this);

        resize(nW,nH);
	for(unsigned int x = 0; x < width(); x++) {
		for(unsigned int y = 0; y < height(); y++) {
			HSLAPixel& orgp = org.getPixel(x / factor, y / factor);
			HSLAPixel& p = getPixel(x,y);
			p = orgp;
		}
	}  
}

void Image::scale(unsigned w, unsigned h) {
	double wf = (double)w/width();
	double hf = (double)h/height();
	double f = fmin(wf, hf);
	scale(f);	
}

void Image::setCor(unsigned x, unsigned y) {
	this->x = x;
	this->y = y;
}

unsigned Image::getX() {
	return x;
}

unsigned Image::getY() {
	return y;
}
