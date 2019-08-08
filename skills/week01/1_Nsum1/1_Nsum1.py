n = int(input())
if n < 0:
    print("please enter a positive number")
else:
    sum = 0
    for i in range(0,n+1,1):
        sum = sum + i
    print(sum)
