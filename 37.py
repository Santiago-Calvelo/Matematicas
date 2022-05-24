import math

v = float(input('Inserte un valor para vx:')), float(input('Inserte un valor para vy:'))
u = float(input('Inserte un valor para ux:')), float(input('Inserte un valor para uy:'))


angv = (math.atan(v[1]/v[0])) * 180/math.pi;
angu = (math.atan(u[1]/u[0])) * 180/math.pi;
ang = angv - angu;
print("Ángulo =", ang);

