#include <stdio.h>

void printCross(int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("%d %d", i, end - i + start);

        if (i < end) {
            printf(" - ");
        }
    }
}

int main() {
    int angka1, angka2;
    scanf("%d %d", &angka1, &angka2);

    if (angka1 > angka2) {
        printCross(angka2, angka1);
    } else if (angka2 > angka1) {
        printCross(angka1, angka2);
    } else {
        printf("%d %d", angka1, angka2);
    }
    return 0;
}
