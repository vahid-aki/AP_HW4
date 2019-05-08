#ifndef SPHERE_H
#define SPHERE_H

#include "threedimensionalshape.h"
#include <cmath>

class Sphere : public ThreeDimensionalShape {
 public:
  Sphere(double radius, double x, double y, double z);
  Sphere(double radius, double x, double y);
  Sphere(double radius, double x);
  Sphere(double radius);
  virtual ~Sphere();

  double area(double radius);
  double volume(double radius);
  virtual void print();
};

#endif
