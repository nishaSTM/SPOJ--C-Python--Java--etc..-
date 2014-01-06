def findSq(n):
	if n == 1:
		return 1
		
	return n*n + findSq(n-1)


n = 1
while (n!=0):
	n = input()
	print findSq(n)
