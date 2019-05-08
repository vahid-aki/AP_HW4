#include "cube.h"

Cube::Cube(double length, double x, double y, double z) : ThreeDimensionalShape{length,x,y,z} {}

Cube::Cube(double length, double x, double y) : Cube{length,x,y,0} {}

Cube::Cube(double length, double x) : Cube{length,x,0,0} {}

Cube::Cube(double length) : Cube{length,0,0,0} {}

double Cube::area(double length) {
  return 6*length*length;
}

double Cube::volume(double length) {
  return length*length*length;
}

void Cube::print() {
  std::cout << "Cube side length = " << R << "\ncenter–>(" << X << "," << Y << "," << Z << ")" << "\narea of " << area(R) << " & volume of " << volume(R) << std::endl;
}

Cube::~Cube() {}
