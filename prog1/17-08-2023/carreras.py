# pedir al usuario su carrera (IRS, ITC, IDM)
# realizar operaciones a partir de su edad también

edad = int(input("edad:"))
carrera = input("siglas de carrera:")

match carrera:
    case "IRS":
        if edad < 18 and edad >= 0:
            print("hola")
        elif edad >= 18:
            print("buenos días")
    case "ITC":
        if edad < 17 and edad >= 0:
            print("que tal")
        elif edad >= 17:
            print("hi!")
    case "IDM":
        print("bienvenido")
    case _:
        print("tu carrera no está aquí")