n, m = list(map(int, input().split()))
mat = []
tmat = []
scol = []
sfil = []

for _ in range(n):
	mat.append(list(map(int, input().split())))
	
for i in range(m+(abs(n-m)-(abs(n-m)))):
	ncol = []
	for j in range(n):
		ncol.append(mat[j][i])
	tmat.append(ncol)

for i in mat:
	scol.append(sum(i))
for i in tmat:
	sfil.append(sum(i))
for i in range(len(scol)):
	mat[i].append(scol[i])
mat.append(sfil + [0])

for i in mat:
	for j in i:
		print(j, end=" ")
	print()