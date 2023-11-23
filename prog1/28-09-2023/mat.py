ren = int(input("renglones:"))
col = int(input("columnas:"))
reng = []
for _ in range(ren):
    colu = []
    for _ in range(col):
        colu.append(int(input()))
    reng.append(colu)

for i in reng:
    for j in i:
        print(j, end=" ")
    print()