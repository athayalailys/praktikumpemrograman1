nilai = int(input())

if nilai >= 80:
    hasil = 'A'
elif nilai >= 70 and nilai < 80:
    hasil = 'B'
elif nilai >= 60 and nilai < 70:
    hasil = 'C'
elif nilai >= 50 and nilai < 60:
    hasil = 'D'
else:
    hasil = 'E'

print(hasil)