num = input("n: ")
num = int(float(num))

match num:
    case 1:
        print("uno")
    case 2:
        print("dos")
    case 3:
        print("tres")
    case 4:
        print("cuatro")
    case 5:
        print("cinco")
    case _:
        print("solo numeros del 1 al 5")