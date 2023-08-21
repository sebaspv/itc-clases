num1 = float(input("num 1: "))
num2 = float(input("num 2: "))

if num1 != num2:
    print("El menor número es", num1 if num1 < num2 else num2)
else:
    print("Numeros iguales")