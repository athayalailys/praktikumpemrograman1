totaldetik = int(input())

jam = totaldetik // 3600
sisadetik = totaldetik % 3600
menit = sisadetik // 60
detik = sisadetik % 60

if jam >= 24:
    hari = jam // 24
    jam = jam % 24
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")