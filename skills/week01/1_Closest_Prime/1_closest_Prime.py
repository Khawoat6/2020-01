'''
def closestPrime(direction):
    for i in range(0, i< len(direction)):
        if direction[i] == 'N':
            y = y + 1
        elif direction[i] == 'S':
            y = y - 1
        elif direction[i] == 'E':
            x = x + 1
        elif direction[i] == 'W':
            x = x - 1
        elif direction[i] == 'Z':
            x = 0
            y = 0
        return (x,y)

direction = input()
print(closestPrime(direction))
'''

