rows, cols = map(int, input().split())

elements = list(map(int, input().split()))

matrix = [[0 for _ in range(cols)] for _ in range(rows)]

index = 0
for i in range(rows):
    for j in range(cols):
        matrix[i][j] = elements[index]
        index += 1

for i in range(rows):
    for j in range(cols):
        print(matrix[i][j], end=" ")
    print()
