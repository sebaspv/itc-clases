n, m = list(map(int, input().split()))
mat = []
mat2 = []

for _ in range(n):
	mat.append(list(map(int, input().split())))
n2, m2 = list(map(int, input().split()))

for _ in range(n2):
	mat2.append(list(map(int, input().split())))
	
if n != n2 or m != m2:
	print("No coinciden las dimensiones")
else:
	summat = []
	for i in range(n):
		ncol = []
		for j in range(m):
			ncol.append(mat[i][j] + mat2[i][j])
		summat.append(ncol)
	print("SUMA:")
	for i in summat:
		for j in i:
			print(j, end=" ")
		print()