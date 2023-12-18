jumlahRuangan = int(input())

zetsuPutih = list(map(int, input().split()))

for i in range(jumlahRuangan):
    print(zetsuPutih[i] * (i + 1), end=" ")
