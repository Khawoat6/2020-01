def count(n):
    count =[] 
    for i in range(n + 1):
        count.append(0)
    count[0] = 0
    #For easy to look at lst_add
    count[1]=1#defualt
    count[2]=2#defualt
    for i in range(3, n + 1): #start at lst3 to lst_n
        if (i > 2):
            #fibo
            count[i] = count[i-1]+count[i-2]
               
    return count[n]
data=int(input())
if (data<=0):
    print("0")
elif(data ==1):
    print("1")
else:
    print(count(data))
