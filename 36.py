
v = int(input('Inserte un valor para vx:')), int(input('Inserte un valor para vy:'))
u = int(input('Inserte un valor para ux:')), int(input('Inserte un valor para uy:'))

sum = int(v[0]) + int(u[0]), int(v[1]) + int(u[1])
res = v[0] - u[0], v[1] - u[1]
prod = v[0] * u[0] + v[1] * u[1]

print("Suma= ", sum)
print("Resta= ", res)
print("Producto escalar= ", prod)

