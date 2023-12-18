#include <stdio.h>

int main () {
    int sisi1, sisi2, sisi3;
    sisi1 = 4; sisi2 = 5; sisi3 = 7;

    int biaya_per_meter = 85000;
    int keliling = sisi1 + sisi2 + sisi3;
    int biaya_total = keliling * biaya_per_meter;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, ", sisi1);
    printf("%d, ", sisi2);
    printf("%d\n", sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", biaya_per_meter);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", biaya_total);
    return 0;
}