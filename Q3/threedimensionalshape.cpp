#include "threedimensionalshape.h"

ThreeDimensionalShape::ThreeDimensionalShape(double r, double x, double y, double z) : Shape{r} {
  X = x;
  Y = y;
  Z = z;
}

ThreeDimensionalShape& ThreeDimensionalShape::operator+=(const Point& point) {
  this->X += point.getX();
  this->Y += point.getY();
  this->Z += point.getZ();
  return *this;
}

ThreeDimensionalShape::~ThreeDimensionalShape() {}
