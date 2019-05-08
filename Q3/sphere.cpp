#include "sphere.h"

Sphere::Sphere(double radius, double x, double y, double z) : ThreeDimensionalShape{radius,x,y,z} {}

Sphere::Sphere(double radius, double x, double y) : Sphere{radius,x,y,0} {}

Sphere::Sphere(double radius, double x) : Sphere{radius,x,0,0} {}

Sphere::Sphere(double radius) : Sphere{radius,0,0,0} {}

double Sphere::area(double radius) {
  return 4*M_PI*radius*radius;
}

double Sphere::volume(double radius) {
  return (4.0/3)*M_PI*radius*radius*radius;
}

void Sphere::print() {
  std::cout << "Sphere radius = " << R << "\ncenter–>(" << X << "," << Y << "," << Z << ")" << "\narea of " << area(R) << " & volume of " << volume(R) << std::endl;
}

Sphere::~Sphere() {}
