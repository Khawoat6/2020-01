def check_prime(a):
   for i in range(2, a):
      if a % i == 0:
         return False
   return True
x=int(input())
if (x==1):
    print("1")
elif (check_prime(x)==True ):
    print ("0")
else :
    low=x-1
    hig=x+1
    while(1):
        if (check_prime(low)==False):
            low-=1
        else:
           
            break
    while(1):
        if (check_prime(hig)==False):
            hig+=1
        else:
            
            break
    if ((hig-x)>(x-low)):
        print(x-low)
    else:print(hig-x)
    
   
    


