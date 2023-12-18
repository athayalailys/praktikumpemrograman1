def MaxBilangan(a, b, c, d):
    max_value = a
    if b > max_value:
        max_value = b
    if c > max_value:
        max_value = c
    if d > max_value:
        max_value = d
    return max_value

a, b, c, d = map(int, input().split())
hasil = MaxBilangan(a, b, c, d)
print(hasil)
