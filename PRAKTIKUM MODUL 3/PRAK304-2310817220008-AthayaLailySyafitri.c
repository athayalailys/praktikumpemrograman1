#include <stdio.h>

int main () {
    int angka;
    scanf("%d", &angka);

    if(angka == 0) {
        printf("Nol");
    }
    else if(angka >= 1 && angka < 10) {
        printf("Satuan");
    }
    else if(angka == 10) {
        printf("Puluhan");
    }
    else if(angka > 10 && angka < 20) {
        printf("Belasan");
    }
    else if(angka > 20 && angka < 100) {
        printf("Puluhan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

    return 0;
}