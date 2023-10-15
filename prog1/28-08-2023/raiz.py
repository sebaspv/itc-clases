n = int(input("De qué número quieres saber su raíz cuadrada entera?: "))
cn = 0
while (cn**2) < n:
    cn = cn + 1
if (cn**2) > n:
    cn = cn - 1
print(cn)