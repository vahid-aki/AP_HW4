#include "twodimensionalshape.h"

TwoDimensionalShape::TwoDimensionalShape(double r, double x, double y) : Shape{r} {
  X = x;
  Y = y;
}

TwoDimensionalShape& TwoDimensionalShape::operator+=(const Point& point) {
  X += point.getX();
  Y += point.getY();
  return *this;
}

TwoDimensionalShape::~TwoDimensionalShape() {}
