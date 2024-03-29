#include <iostream>

#include "circle.h"
#include "square.h"
#include "sphere.h"
#include "cube.h"
#include "point.h"

using std::cout;

int main()
{
  Square sqr( 12, 2, 2 );
  Sphere sph( 5, 1.5, 4.5 );
  Cube cub( 2.2 );
  Circle cir( 3.5, 6, 9 );
  Shape *ptr[ 4 ] = { &cir, &sqr, &sph, &cub };
  
  for ( int x = 0; x < 4; ++x )
    cout << *( ptr[ x ] ) << '\n';

  
  // changing the coordinate
  Point po(2.2, 6.4);
  cir += po;
  cub += po;
  sqr += po;
  sph += po;
  std::cout << std::endl;
  std::cout << "shapes after changing the coordinate:" << std::endl;
  std::cout << std::endl;
  for ( int x = 0; x < 4; ++x )
    cout << *( ptr[ x ] ) << '\n';
  
  return 0;
}
