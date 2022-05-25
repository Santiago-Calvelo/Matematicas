#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int v[] = {atoi(argv[1]), atoi(argv[2])};
  int u[] = {atoi(argv[3]), atoi(argv[4])};

  int sum[] = {v[0] + u[0], v[1] + u[1]};
  int res[] = {v[0] - u[0], v[1] - u[1]};
  int prod = v[0] * u[0] + v[1] * u[1];

  printf("Suma= (%d;%d)\n", sum[0], sum[1]);
  printf("Resta= (%d;%d)\n", res[0], res[1]);
  printf("Producto escalar= %d\n", prod);
return 0;
}
