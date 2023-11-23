n = int(input("n de estudiantes: "))

est = []
cal = []
lcal1 = []
lcal2 = []
for _ in range(n):
    est.append(input())
for _ in range(n):
    cal1 = int(input())
    cal2 = int(input())
    lcal1.append(cal1)
    lcal2.append(cal2)
    cal.append((cal1+cal2)/2)

print("nombre        c1     c2   prom")
for nom, ca1, ca2, prom in zip(est, lcal1, lcal2, cal):
    print(nom, "   ", ca1, "   ",ca2, "   ",prom)