hw = int(input())
test1 = int(input())
test2 = int(input())
test3 = int(input())

sum_pint = (hw + test1 + test2 + test3)

if (sum_pint >= 80 and sum_pint <= 100):
    print("A")
elif(sum_pint >= 75 and sum_pint < 80):
    print("B+")
elif(sum_pint >= 70 and sum_pint < 75):
    print("B")
elif(sum_pint >= 65 and sum_pint < 70):
    print("C+")
elif(sum_pint >= 60 and sum_pint < 65):
    print("C")
elif(sum_pint >= 55 and sum_pint < 60):
    print("D+")
elif(sum_pint >= 50 and sum_pint < 55):
    print("D")
elif(sum_pint >= 0 and sum_pint <= 49):
    print("F\n")
else:
    print("please enter number again")
    print("homework 40%\ntest1 20%\ntest2 20%\ntest3 20%")
    
