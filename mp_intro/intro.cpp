#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "intro.h"
#include <string>
#include <cstdlib>
#include <ctime>

using cs225::HSLAPixel;
using cs225::PNG;
using namespace std;

void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  PNG* original = new PNG();
  original->readFromFile(inputFile);
  unsigned int width = original->width();
  unsigned int height = original->height();
  
  PNG* output = new PNG(*original);
 
  for(unsigned int x = 0; x < width; x++) {
	  for(unsigned int y = 0; y < height/2; y++) {
		  HSLAPixel& p1 = output->getPixel(x, y);
		  HSLAPixel& p2 = output->getPixel(width - x - 1, height - y - 1);
		  HSLAPixel temp = p1;
		  p1 = p2;
		  p2 = temp;
	  } 
  }
  if(height%2 != 0) {
	  for(unsigned int x = 0; x < width/2; x++) {
	  	HSLAPixel& p1 = output->getPixel(x,height/2);
		HSLAPixel& p2 = output->getPixel(width-x-1,height/2);
		HSLAPixel temp = p1;
		p1 = p2;
		p2 = temp;
	  }
  }
  output->writeToFile(outputFile);

  delete output;
  delete original;
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
	PNG png(width, height);
	srand((unsigned)time(0));
  	// TODO: Part 3
  	for(unsigned int x = 0; x < width; x++) {
		for(unsigned int y = 0; y < height; y++) {
			HSLAPixel& p = png.getPixel(x,y);
			p.h = rand()%360;
		        p.s = 1.0;
			p.l = 0.5;
			p.a = 1.0;	
		}
	}

  return png;
}
