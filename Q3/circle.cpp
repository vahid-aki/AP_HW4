#include "circle.h"

Circle::Circle(double radius, double x, double y) : TwoDimensionalShape{radius,x,y} {}

Circle::Circle(double radius, double x) : Circle{radius,x,0} {}

Circle::Circle(double radius) : Circle{radius,0,0} {}

double Circle::area(double radius) {
  return (M_PI)*radius*radius;
}

void Circle::print() {
  std::cout << "Circle radius = " << R << "\ncenter–>(" << X << "," << Y << ")" << "\narea of " << area(R) << std::endl;
}

Circle::~Circle() {}
