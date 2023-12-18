#include <stdio.h>

int main () {
    float jarijari, tinggi;

    scanf("%f \n", &jarijari);
    scanf("%f", &tinggi);

    float volume = 22/7 * pow(jarijari, 2) * tinggi;
    float luas = 2 * 22/7 * jarijari * (jarijari + tinggi);
    float keliling = 2 * 22/7 *jarijari;

    printf("Volume = %.2f\n", (volume));
    printf("Luas = %.2f\n", (luas));
    printf("Keliling = %.2f", (keliling));

    float jarijari1, tinggi1;
    
    scanf("%f", &jarijari1);
    scanf("%f", &tinggi1);

    float volume1 = 22/7 * pow(jarijari1, 2) * tinggi1;
    float luas1 = 2 * 22/7 * jarijari1 * (jarijari1 + tinggi1);
    float keliling1 = 2 * 22/7 * jarijari1;

    printf("Volume = %.2f\n", volume1);
    printf("Luas = %.2f\n", luas1);
    printf("Keliling = %.2f", keliling1);
    return 0;
}