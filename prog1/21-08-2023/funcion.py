import math

x = float(input())
if x < 0:
    print((3*(math.pow(x, 3))) + (2*x) - 5)
elif x >= 0:
    print(math.sqrt(3*x))