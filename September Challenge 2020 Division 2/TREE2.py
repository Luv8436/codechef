t = int(input())
for test in range(t):
	n = int(input())
	x = list(map(int, input().split()))
	distinct = dict()
	for element in x:
		if element==0:
			continue
		if element not in distinct:
			distinct[element] = 0
		else:
			distinct[element] += 1
			
	print(len(distinct))