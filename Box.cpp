#include "Box.h"


// Implement setters and getters
void Box::setDetails(int L,int W,int H)
{
  length=L;
  width=W;
  height=H;
}

int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
