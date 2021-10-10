t = int(input())
for _ in range(t):
    n = int(input())
    row1 = input()
    for i in range(n):
        if row1[i] == 'L' or row1[i] == 'R':
            print(row1[i], end='')
        elif row1[i] == 'U':
            print('D', end='')
        else:
            print('U', end='')
    print()
