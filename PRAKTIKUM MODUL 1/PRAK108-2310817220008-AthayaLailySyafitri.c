#include <stdio.h>

int main () {
    float putaran = 5;
    float jarak_total = 14;

    float jarijari = jarak_total / (2 * 3.14 * 5);
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman %.f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek %.f Kilometer\n", jarak_total);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jarijari);

    return 0;
}