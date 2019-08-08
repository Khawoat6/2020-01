limit=int(input())

n=input()
data=n.split(" ")
if (len(data)<=((limit*2)-1)):
    
    
    
    for i in range(0, len(data)) :
        if (data[i]=="+"):
            data[i+1]=int(data[i-1])+int(data[i+1])
        elif (data[i]=="-"):
            data[i+1]=int(data[i-1])-int(data[i+1])

    print(data[-1])
