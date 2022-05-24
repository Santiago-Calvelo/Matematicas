import math

v = int(input('Inserte un valor para vx:')), int(input('Inserte un valor para vy:')), int(input('Inserte un valor para vz:'))
u = int(input('Inserte un valor para ux:')), int(input('Inserte un valor para uy:')), int(input('Inserte un valor para uz:'))


prod = v[1] * u[2] - v[2] * u[1], v[2] * u[0] - v[0] * u[2], v[0] * u[1] - v[1] * u[0];

print("Producto vectorial:", prod[0], prod[1], prod[2]);

