#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "shape.h"

class TwoDimensionalShape : public Shape {
 public:
  TwoDimensionalShape(double r, double x, double y);
  ~TwoDimensionalShape();

  TwoDimensionalShape& operator+=(const Point& point);
  
 protected:
  double X;
  double Y;
};

#endif
