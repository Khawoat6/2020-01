k = 1
case1 = 0 # 100,000 ==> vat 0% ==> 0
case2 = 54000 # 100,001 to 1,000,000 = 900,000 ==> vat 6% ==> 900,000*0.06 == 54,000
case3 = 480000 # 1,000,000 to 5,000,000 = 4,000,000 ==> vat 12% ==> 4,000,000*0.12 == 480,000
case4 = 1000000 # 5,000,001 to 10,000,000 = 5,000,000 ==> vat 20% ==> 5,000,000*0.20 == 1,000,000

while( k != 0):
    k = int(input())
    tax = 0
    if(k == 0):
        break
    # vat 0%
    elif(k <= 100000):
        tax = case1
        print("%d" % tax)
    # vat 6%
    elif(k >= 100001 and k <= 1000000):
        sub = k - 100000
        tax = sub * 0.06
        print("%d" % tax)
    # vat 12%
    elif(k >= 1000001 and k <= 5000000):
        sub = k - 1000000
        tax = case2 + (sub * 0.12)
        print("%d" % tax)
    # vat 20%
    elif(k >= 5000001 and k <= 10000000):
        sub = k - 5000000
        tax = case2 + case3 + (sub * 0.20)
        print("%d" % tax)
    # vat 32%
    elif(k > 10000001):
        tax = case2 + case3 + case4 + ((k-10000000) * 0.32)
        print("%d"% tax)
