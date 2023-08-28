x = input()
x1 = (int(x)//100)%10
x2 = (int(x)//10)%10
x3 = (int(x)//1)%10

if x1 <= x2 <= x3:
    print("SI")
else:
    print("NO")
