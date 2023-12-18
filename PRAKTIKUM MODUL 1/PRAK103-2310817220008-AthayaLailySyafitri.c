#include <stdio.h>

int main () {
    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;
    printf("Variabel a bernilai %.f\n", a);
    printf("Variabel b bernilai %.f\n", b);
    printf("Variabel x benilai %.f\n", x);
    printf("Variabel y bernilai %.f\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", (a + b) * x / y);
    return 0;
}