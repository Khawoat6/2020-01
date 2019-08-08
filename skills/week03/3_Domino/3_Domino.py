def numSolution(n): 
	if (n==1): 
		return 1
	elif (n==2): 
		return 2
	else: 
		return numSolution(n-1)+numSolution(n-2)

x = int(input())
print(numSolution(x)) 

