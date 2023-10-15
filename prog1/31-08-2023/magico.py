import random

mag = random.randint(1, 100)
ans = int(input("Adivina el número: "))
intentos = 1
while ans != mag:
    if ans < mag:
        print("El número mágico es mayor que el que me diste")
        ans = int(input("Vuelve a adivinar: "))
        intentos+=1
    elif ans > mag:
        print("El número mágico es menor que el que me diste")
        ans = int(input("Vuelve a adivinar: "))
        intentos+=1

print("Correcto! El número mágico era", mag)
print("Lo adivinaste en", intentos, "intentos")