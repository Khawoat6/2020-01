def plusMinus(size, value):
    for i in range(0, len(value)) :
        if (value[i] == "+"):
            value[i+1] = int(value[i-1]) + int(value[i+1])
        elif (value[i] == "-" ):
            value[i+1] = int(value[i-1]) - int(value[i+1])
        elif (value[i] == "*" or value[i] == "/"):
            print("plase input (+) or (-) only!!!")
    print(value[-1])

size = int(input())
n = input()
value = n.split(" ")
plusMinus(size, value)
