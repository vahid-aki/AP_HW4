#ifndef CUBE_H
#define CUBE_H

#include "threedimensionalshape.h"

class Cube : public ThreeDimensionalShape {
 public:
  Cube(double length, double x, double y, double z);
  Cube(double length, double x, double y);
  Cube(double length, double x);
  Cube(double length);
  virtual ~Cube();

  double area(double length);
  double volume(double length);
  virtual void print();
};

#endif
