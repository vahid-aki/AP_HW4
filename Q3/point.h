#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
 public:
  Point(double x, double y, double z);
  Point(double x, double y);

  double getX() const { return X; }
  double getY() const { return Y; }
  double getZ() const { return Z; }
  
 private:
  double X;
  double Y;
  double Z;
};

#endif
