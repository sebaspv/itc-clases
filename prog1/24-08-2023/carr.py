def saludo(carrera, edad):
    carreras = ["ITC", "IRS", "IDM"]
    if carrera.upper() in carreras and edad >= 18:
        print("bienvenido")
    elif carrera.upper() in carreras and edad < 18:
        print("hola")
    else:
        print("buenos días")

def main():
    carr = input("Cuáles son las siglas de la carrera que estudias?\n")
    ed = int(input("Cuál es tu edad en años?\n"))
    saludo(carr, ed)

if __name__ == "__main__":
    main()