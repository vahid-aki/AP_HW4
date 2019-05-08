#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "point.h"

class Shape {
 public:
  Shape(double r);
  ~Shape();

  virtual void print() = 0;
  friend std::ostream& operator<< (std::ostream& out, Shape& shape);
  
 protected:
  double R;
 };

#endif
