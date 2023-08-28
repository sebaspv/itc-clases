a = int(input())
b = int(input())

if a == b:
    print("N")
elif (a%2 == 0) and (b%2 == 0):
    print("N")
elif (a%2 == 1) and (b%2 == 1):
    print("N")
else:
    print("B")