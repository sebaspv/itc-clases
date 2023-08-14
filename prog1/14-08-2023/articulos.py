# escribe un programa que pida al usuario el precio de un producto sin iva
# el programa despliega el iva y el total a pagar

# el código más legible de todo el mundo
producto = float(input("¿Cuánto cuesta el producto sin IVA?: "))
print("El IVA es de", producto*0.16, "\nEl producto total cuesta", producto*1.16)