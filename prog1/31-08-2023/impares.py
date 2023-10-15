# sume los primeros n impares

n = int(input("n: "))
c = 1
impares = 0
n = n*2-1
while c<=n:
    if c%2 == 1 and c!=0:
        impares+=c
    c+=1
print(impares)