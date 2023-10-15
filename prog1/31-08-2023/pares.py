# sume los primeros n pares

n = int(input("n: "))
c = 1
pares = 0
n = n*2
while c<=n:
    if c%2 == 0:
        pares+=c
    c+=1
print(pares)