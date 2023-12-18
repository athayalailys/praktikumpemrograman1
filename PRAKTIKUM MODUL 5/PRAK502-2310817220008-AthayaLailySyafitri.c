#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2) {
    return mutlak(nilai1 - nilai2);
}

int mutlak(int angka) {
    return (angka < 0) ? -angka : angka;
}

int main() {
    int x1, y1, x2, y2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int hasil = hitung(x1, x2) + hitung(y1, y2);

    printf("%d", mutlak(hasil));

    return 0;
}
