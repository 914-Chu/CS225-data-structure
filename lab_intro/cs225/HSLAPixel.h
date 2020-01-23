/**
 * @file HSLAPixel.h
 *
 * @author CS 225: Data Structures
 * @version 2018r1-lab1
 */

#pragma once

#include <iostream>
#include <sstream>

namespace cs225 {

class HSLAPixel {

    public:

        double h;  //hue           [0,360)
	double s;  //saturation    [0,1]
	double l;  //luminance     [0,1]
	dobule a;  //alpha channel [0,1]		
	
	HSLAPixel();
	HSLAPixel(double hue, double saturation, double luminance);
	HSLAPixel(double hue, double saturation, double luminance, double alpha);
	
};
}

