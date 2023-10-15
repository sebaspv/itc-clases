print("x    f(x)")
def func(x):
    return ((x**2)*3)+(2*x)-5
for x in range(5, -1, -1):
    print(x/2.5," ", f"{func(x/2.5): .2f}")
nn = 0
print("x    f(x)")
while nn < 2.1:
    print(f"{nn: .2f}"," ", f"{func(nn): .2f}")
    nn+=0.4