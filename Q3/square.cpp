#include "square.h"

Square::Square(double length, double x, double y) : TwoDimensionalShape{length,x,y} {}

Square::Square(double length, double x) : Square{length,x,0} {}

Square::Square(double length) : Square{length,0,0} {}

double Square::area(double length) {
  return length*length;
}

void Square::print() {
  std::cout << "Square side length = " << R << "\ncenter–>(" << X << "," << Y << ")" << "\narea of " << area(R) << std::endl;
}

Square::~Square() {}
