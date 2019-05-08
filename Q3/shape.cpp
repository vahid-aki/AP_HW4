#include "shape.h"

Shape::Shape(double r) : R{r} {}

Shape::~Shape() {}

std::ostream& operator<< (std::ostream& out, Shape& shape) {
  shape.print();
  return out;
}
