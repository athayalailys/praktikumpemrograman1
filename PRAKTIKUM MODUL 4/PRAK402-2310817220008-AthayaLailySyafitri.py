batas = int(input())

for i in range(1, batas + 1, 2):
    print(i, end=' ')
print()

for i in range(batas if batas % 2 == 0 else batas - 1, 1, -2):
    print(i, end=' ')
print()