cim = 0
c = 0
while cim != 4:
    n = int(input("Dame un número: "))
    c+=1
    if n % 2 == 0:
        cim = 0 # reiniciar cuenta de impares cuando hay un par en medio
    if n % 2 == 1:
        cim+=1
print("Leí", c, "números antes de contar 4 impares juntos")