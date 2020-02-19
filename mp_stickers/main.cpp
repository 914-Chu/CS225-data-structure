#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image base;
  base.readFromFile("leak.png");
  Image before;
  before.readFromFile("before.png");
  Image after;
  after.readFromFile("after.png");
  Image mem;
  mem.readFromFile("mem.png");
  
  StickerSheet s1(base, 4);
  s1.addSticker(before, 0, 0);
  s1.addSticker(after, 0, 1023);
  s1.addSticker(mem, 665, 1651);
  s1.render().writeToFile("myImage.png");

  return 0;
}
