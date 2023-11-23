def primo(n):
	stat = True
	if n == 1:
		return False
	for i in range(2, (n//2)+1):
		if n % i == 0:
			stat = False
	return stat

n, m = list(map(int, input().split()))
mat = []
tmat = []
for _ in range(n):
	mat.append(list(map(int, input().split())))

primos = []
for i in mat:
	for j in i:
		if primo(j):
			primos.append(j)
if primos == []:
	print("no hay primos")
else:
    print(max(primos))