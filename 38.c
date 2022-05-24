#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int v[] = {atoi(argv[1]), atoi(argv[2]), atoi(argv[3])};
  int u[] = {atoi(argv[4]), atoi(argv[5]), atoi(argv[6])};
  int prod[] = {v[1] * u[2] - v[2] * u[1], v[2] * u[0] - v[0] * u[2], v[0] * u[1] - v[1] * u[0]};

  printf("Producto vectorial: (%d;%d;%d)\n", prod[0], prod[1], prod[2]);
  return 0;
}
