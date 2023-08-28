x1 = int(input("x1: "))
y1 = int(input("y1: "))
x2 = int(input("x2: "))
y2 = int(input("y2: "))

cel1 = ""
cel2 = ""


if x1 == y1:
    cel1 = "N"
elif (x1%2 == 0) and (y1%2 == 0):
    cel1 = "N"
elif (x1%2 == 1) and (y1%2 == 1):
    cel1 = "N"
else:
    cel1 = "B"

if x2 == y2:
    cel2 = "N"
elif (x2%2 == 0) and (y2%2 == 0):
    cel2 = "N"
elif (x2%2 == 1) and (y2%2 == 1):
    cel2 = "N"
else:
    cel2 = "B"

if cel1 == cel2:
    print("igual color")
else:
    print("color distinto")