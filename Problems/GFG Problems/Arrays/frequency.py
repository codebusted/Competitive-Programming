
n = 9
arr = [9, 2, 5, 7, 9, 2, 2, 1, 4]
d = {}
for i in range(1, n + 1):
	d[i] = 0;

for x in arr:
	d[x] += 1

for i in range(1, n + 1):
	print(d[i], end=" ")