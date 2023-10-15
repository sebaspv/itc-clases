# sume los primeros n enteros positivos

n = int(input("n: "))
c = 1
s = 0
while c<=n:
    s+=c
    c+=1
print(s)