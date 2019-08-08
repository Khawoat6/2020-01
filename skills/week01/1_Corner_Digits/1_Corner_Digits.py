n = int(input())
if n < 10:
    print("please enter number agin")
else:
    last_digit = n % 10
    while n >= 10:
        n = n / 10
    print("%d%d" % (n, last_digit))
