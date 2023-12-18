#include <stdio.h>

int main () {
    int a, b, c;
    a = 4; b = 8; c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b? Jawabannya adalah %d\n", a == b);
    printf("Apakah b lebih besar dari c? Jawabannya adalah %d\n", b > c);
    printf("Apakah a tidak sama dengan c? Jawabannya adalah %d\n", a != c);
    return 0;
}