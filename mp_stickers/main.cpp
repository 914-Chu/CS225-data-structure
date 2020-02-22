#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image base;
  base.readFromFile("alma.png");
  Image a;
  a.readFromFile("i.png");
  Image b;
  b.readFromFile("i.png");
  
  StickerSheet s1(base, 3);
  s1.addSticker(a, 26, 22);
  s1.addSticker(b, 656, 22);
  s1.render().writeToFile("myImage.png");

  return 0;
}
