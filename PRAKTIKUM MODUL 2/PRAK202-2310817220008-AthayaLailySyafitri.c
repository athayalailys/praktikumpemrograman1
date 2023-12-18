#include <stdio.h>

int main () {
    //test case 1
    float a, b;

    //input
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &b);
    printf("\n");

    //output
    printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.f\" adalah \"%.2f\"", a, b, a + b);
    printf("\n");
    
    //test case 2
    float c, d;

    //input
    printf("\n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &c);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &d);
    printf("\n");

    //output
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", c, d, c + d);
    
    return 0;
}