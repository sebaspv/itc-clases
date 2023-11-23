n, t = list(map(int, input().split()))

ini = list(input())


if t == 1:
    for i in range(n-1):
        if ini[i] == "B" and ini[i+1] == "G":
            ini[i] = "G"
            ini[i+1] = "B"
else:
    for _ in range(t-1):
        for i in range(n-1):
            if ini[i] == "B" and ini[i+1] == "G":
                ini[i] = "G"
                ini[i+1] = "B"
print(ini)