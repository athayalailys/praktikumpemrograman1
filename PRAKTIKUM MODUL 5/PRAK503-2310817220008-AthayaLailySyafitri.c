#include <stdio.h>

int maksimal(int a, int b) {
    return (a > b) ? a : b;
}

int minimal(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int bilangan, nilai, batas = 0;
    int maks = -100000;
    int minim = 100000;

    scanf("%d", &bilangan);

    while (batas < bilangan) {
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
        batas++;
    }

    printf("%d %d", maks, minim);

    return 0;
}
