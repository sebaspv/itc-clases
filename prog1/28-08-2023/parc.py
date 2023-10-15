"""
Escribe un programa que escriba la siguiente tabla
f(x) = 3x + 2

pedir límite inferior
pedir límite superior

x  | f(x)
-2   -4
-1   -1
 0    2
 1    5
 2    7

"""
import math

li = float(input("Dame el límite inferior: "))
ls = float(input("Dame el límite superior: "))
inc = float(input("Dame el incremento: "))

def fequis(n):
    return (3*n) + 2

print("x   f(x)")
while li <= ls:
    val = fequis(li)
    if val < 0:
        print(str(float(li)) + "  " + str(float(val)))
    else:
        print(str(float(li)) + "    " + str(float(val)))
    li = li+inc