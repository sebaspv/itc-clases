n, m = list(map(int, input().split()))
mat = []
tmat = []
for _ in range(n):
	mat.append(list(map(int, input().split())))
for i in mat:
	print(max(i))

c = 0
for i in range(m+(abs(n-m)-(abs(n-m)))):
	ncol = []
	for j in range(n):
		ncol.append(mat[j][i])
	tmat.append(ncol)
for i in tmat:
	print(max(i))