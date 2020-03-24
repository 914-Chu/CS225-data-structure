#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  traversal_ = NULL;
  //current_ = Point(unsigned(-1), unsigned(-1));
  visited_.resize(1, std::vector<bool>(1,false));
  //visited_.resize(pic_.width(),std::vector<bool>(pic_.height(), false));
  /**
  for(unsigned int x = 0; x < pic_.width(); x++){
      for(unsigned int y = 0; y < pic_.height(); y++){
          visited[x][y] = false;
      }
  }
  */
}

/**
 * Parameterized constructor.
 */

ImageTraversal::Iterator::Iterator(ImageTraversal* traversal, PNG pic, Point start, double tolerance):traversal_(traversal), pic_(pic),start_(start), current_(start), tolerance_(tolerance) {
  visited_.resize(pic_.width(),std::vector<bool>(pic_.height(), false));
  //if(isValid(current_)) visited_[current_.x][current_.y] = true;
  /**
  for(unsigned int x = 0; x < pic_.width(); x++){
      for(unsigned int y = 0; y < pic_.height(); y++){
          visited[x][y] = false;
      }
  }
  */
}

/**
 * Destructor
 */

ImageTraversal::Iterator::~Iterator(){
  
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  //if(traversal_->empty()) return *this;
  
  //current_ = traversal->pop();
  visited_[current_.x][current_.y] = true;
  if(isValid(Point(current_.x + 1, current_.y))) traversal_->add(Point(current_.x + 1, current_.y));      
  if(isValid(Point(current_.x, current_.y + 1))) traversal_->add(Point(current_.x, current_.y + 1)); 
  if(isValid(Point(current_.x - 1, current_.y))) traversal_->add(Point(current_.x - 1, current_.y));
  if(isValid(Point(current_.x, current_.y - 1))) traversal_->add(Point(current_.x, current_.y - 1));
    
  
  while(!traversal_->empty() && !isValid(traversal_->peek())){
      //std::cout << "while ++" << std::endl;
      traversal_->pop();
      if(traversal_->empty()) return *this;
    }
  //std::cout << "if ++" << std::endl; 
  if(traversal_->empty()) traversal_ = NULL;
  else current_ = traversal_->peek();  
      //std::cout << "else ++" << std::endl;
    //return *this;
  
  //std::cout << "return ++" << std::endl;
  return *this;
 
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return current_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  //return !(this->current_.x == other.current_.x && this->current_.y == other.current_.y);
   bool thisEmpty = false;
   bool otherEmpty = false;
   if (traversal_ == NULL) { thisEmpty = true; }
   if (other.traversal_ == NULL) { otherEmpty = true; }
   if (!thisEmpty)  { thisEmpty = traversal_->empty(); }
   if (!otherEmpty) { otherEmpty = other.traversal_->empty(); }
   if (thisEmpty && otherEmpty) return false; 
   else if ((!thisEmpty)&&(!otherEmpty)) return (traversal_ != other.traversal_);
   else return true;
}

/**
 Check if the point can be visited or not according to the given condition.
*/

bool ImageTraversal::Iterator::isValid(Point p) {
  //std::cout << "is valid" << std::endl;
  if(p.x < pic_.width() && p.y < pic_.height()){
      HSLAPixel& start = pic_.getPixel(start_.x, start_.y);
      HSLAPixel& current = pic_.getPixel(p.x, p.y);
      if(calculateDelta(start, current) < tolerance_ && !visited_[p.x][p.y]){
          //std::cout << "isvalid true" << std::endl;
          return true;
      }
  }
  //std::cout << "is valid false" << std::endl;
  return false;
}


