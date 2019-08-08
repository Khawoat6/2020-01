walk = input()
i = 0
x = 0
y = 0
while (i < len(walk)):
    if walk[i] == 'Z':
        x = 0
        y = 0
    elif walk[i] == 'E':
        x = x + 1
    elif walk[i] == 'W':
        x = x - 1
    if walk[i] == 'N':
        y = y + 1
    elif walk[i] == 'S':
        y = y - 1
    i += 1
print(x,y)
