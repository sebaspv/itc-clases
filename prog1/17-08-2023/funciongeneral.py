import math

a = float(input("a:"))
b = float(input("b:"))
c = float(input("c:"))

disc = (pow(b, 2)) - (4*a*c)

if disc < 0:
    print("No hay soluciones para x")
elif disc == 0:
    x1 = (-1*b + math.sqrt(disc))/(2*a)
    print(f"x1: {x1}")
else:
    x1 = (-1*b + math.sqrt(disc))/(2*a)
    x2 = (-1*b - math.sqrt(disc))/(2*a)
    print(f"x1: {x1}, x2: {x2}")