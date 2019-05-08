#ifndef SQUARE_H
#define SQUARE_H

#include "twodimensionalshape.h"

class Square : public TwoDimensionalShape {
 public:
  Square(double length, double x, double y);
  Square(double length, double x);
  Square(double length);
  virtual ~Square();

  double area(double length);
  virtual void print();
};

#endif
