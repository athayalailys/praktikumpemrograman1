n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    matrix1 = list(map(int, input().split()))

    matrix2 = list(map(int, input().split()))

    result = [matrix1[i] * matrix2[i] for i in range(n1)]
    print(*result)
