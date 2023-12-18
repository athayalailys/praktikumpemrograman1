#include <stdio.h>

int main () {
    int pasukan_yuzhong = 958730;
    int pahlawan = 5;
    int pasukan_per_pahlawan = pasukan_yuzhong / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan_yuzhong);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);
    return 0;
}