#include <stdio.h>

int main () {
    int sepatu_a = 400000;
    int sepatu_b = 350000;
    printf("Harga sepatu A adalah %d\n", sepatu_a);
    printf("Harga sepatu B adalah %d\n", sepatu_b);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %d\n", sepatu_a - (sepatu_a * 13 / 100));
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %d\n", sepatu_b - (sepatu_b * 21 / 100));
    return 0;
}