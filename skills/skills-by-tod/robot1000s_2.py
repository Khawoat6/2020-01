def main():
    d=input()
    k=int(input())
    data=[0]*4
    x=0
    y=0
    for i in d:
        if i =="N":
            y+=1
            data[0]+=1
        elif i=="S":
            y-=1
            data[1]+=1
        elif i=="E":
            x+=1
            data[2]+=1
        elif i=="W":
            x-=1
            data[3]+=1
        elif i=="Z":
            x=0
            y=0
        else:
            print("Error")
    #print(x,y)
    #ps. robot1000
    #N[0]S[1]E[2]W[3]
    #print(data)
    
    p=0   
    while (p<k):
        p+=1
        tmp=100
        for i in data:
            
            if(0<i<tmp):        
                tmp=i
        data[data.index(tmp)]-=1
         
        
            
    print ((abs(data[0]-data[1])+abs(data[2]-data[3]))*2)
            
if __name__== "__main__":
  main()
