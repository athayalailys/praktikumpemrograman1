#include <stdio.h>

int main() {
    int nilai;

    scanf("%d",&nilai);

    if (nilai >= 80) {
        printf("A\n");
    }
    else if (nilai >= 70 && nilai < 80) {
        printf("B\n");
    }
    else if (nilai >= 60 && nilai < 70) {
        printf("C\n");
    }
    else if (nilai >= 50 && nilai < 60) {
        printf("D\n");
    }
    else {
        printf("E\n");
    }
    return 0;
}