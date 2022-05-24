#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int v[] = {atoi(argv[1]), atoi(argv[2])};
  int u[] = {atoi(argv[3]), atoi(argv[4])};

  int sum[] = {v[0] + u[0], v[1] + u[1]};
  int res[] = {v[0] - u[0], v[1] - u[1]};
  int prodv[] = {5 * v[0], 5 * v[1]};
  int produ[] = {5 * u[0], 5 * u[1]};

  printf("Suma= (%d;%d)\n", sum[0], sum[1]);
  printf("Resta= (%d;%d)\n", res[0], res[1]);
  printf("Producto escalar(v)= (%d;%d)\n", prodv[0], prodv[1]);
  printf("Producto escalar(u)= (%d;%d)\n", produ[0], produ[1]);
return 0;
}
