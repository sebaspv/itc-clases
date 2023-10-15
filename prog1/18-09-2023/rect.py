ren = 5
col = 4

print("* "*col)
for _ in range(ren-2):
    print("*", (col)*" ", "*", sep = "")
print("* "*col)