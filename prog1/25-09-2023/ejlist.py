en = input().split()
for i in range(len(en)):
    en[i] = int(en[i])
s = 0
for i in en:
    s+=i
print(s)