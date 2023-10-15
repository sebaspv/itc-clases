# pide numeros mientras que la suma sea menor que 20

st = 0
c = 0
while st < 20:
    ad = int(input("Dame un número a sumar: "))
    if (st+ad)>20:
        break
    else:
        st+=ad
        c+=1
print("Sumé los primeros", c, "números que me diste")
print("La suma final menor o igual a 20 es", st)