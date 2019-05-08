#include "point.h"

Point::Point(double x, double y, double z) : X{x}, Y{y}, Z{z} {}

Point::Point(double x, double y) : Point{x,y,0} {}
