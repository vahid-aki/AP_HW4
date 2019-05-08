#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H

#include "shape.h"

class ThreeDimensionalShape : public Shape {
 public:
  ThreeDimensionalShape(double r, double x, double y, double z);
  ~ThreeDimensionalShape();

  ThreeDimensionalShape& operator+=(const Point& point);
  
 protected:
  double X;
  double Y;
  double Z;
};

#endif
