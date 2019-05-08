#ifndef CIRCLE_H
#define CIRCLE_H

#include "twodimensionalshape.h"
#include <cmath>

class Circle : public TwoDimensionalShape {
 public:
  Circle(double radius, double x, double y);
  Circle(double radius, double x);
  Circle(double radius);
  virtual ~Circle();

  double area(double radius);
  virtual void print();
};

#endif
