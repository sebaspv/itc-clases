def disc(a: float, b: float, c: float) -> float:
    return (b**2)-(4*a*c)

def main():
    a = float(input("a: "))
    b = float(input("b: "))
    c = float(input("c: "))

    print(disc(a, b, c))

if __name__ == "__main__":
    main()