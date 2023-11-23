n = int(input())
noms = []
califs = []
proms = []
for _ in range(n):
    nom = input("Nombre:").title()
    noms.append(nom)
    cals = input("3 calificaciones separadas por espacios:")
    cals = list(map(int, cals.split()))
    califs.append(cals)
    prom = sum(cals)/3
    proms.append(prom)

print("Nombre       P1  P2  P3      Promedio")
for i in range(n):
    lennom = abs(7-len(noms[i])+6)
    print(noms[i], end=(" "*lennom))
    for m in califs[i]:
        if len(str(m)) == 1:
            print(m, end="   ")
        elif len(str(m)) == 2:
            print(m, end="  ")
        elif len(str(m)) == 3:
            print(m, end=" ")
    print(end="    ")
    print(proms[i])