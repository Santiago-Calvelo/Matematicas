#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double v[] = {atof(argv[1]), atof(argv[2])};
  double u[] = {atof(argv[3]), atof(argv[4])};
  double angv = (atan(v[1]/v[0])) * 180/3.14159265359;
  double angu = (atan(u[1]/u[0])) * 180/3.14159265359;
  double ang = angv - angu;
  printf("%.2f\n", ang);
  return 0;
}
