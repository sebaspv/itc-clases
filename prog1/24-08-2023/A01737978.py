def digitomin(a, b, c, d):
    if a <= b and a <= c and a <= d:
        return a
    elif b <= a and b <= c and b <= d:
        return b
    elif c <= a and c <= b and c <= d:
        return c
    elif d <= a and d <= b and d <= c:
        return d

n = float(input("Ingresa un número entero de 4 dígitos: "))

if n != int(n): # comprobar que la forma decimal es igual a la entera, comprobando que el numero sí sea entero
    print("No es un número entero")
else:
    n = int(n)
    if n <= 9999 and n >= 1000:
        di1 = n//1000
        di2 = (n - (di1*1000)) // 100
        di3 = (n - (di1*1000 + di2*100)) // 10
        di4 = (n - (di1*1000 + di2*100 + di3*10))

        # ahora tenemos todos los dígitos, debemos compararlos
        menor = digitomin(di1, di2, di3, di4)
        sumdi = di1+di2+di3+di4
        print("El dígito menor es", menor)
        print("La suma de los dígitos es", sumdi)
        if sumdi >= 18:
            print("La suma de los dígitos SI es mayor o igual a 18")
        else:
            print("La suma de los dígitos NO es mayor o igual a 18")
    else:
        print("El número no es de 4 dígitos")
