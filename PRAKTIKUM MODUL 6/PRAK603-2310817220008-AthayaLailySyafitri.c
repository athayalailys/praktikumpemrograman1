#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int matrix1[n1][1], matrix2[n2][1];

        for (int i = 0; i < n1; i++) {
            scanf("%d", &matrix1[i][0]);
        }

        for (int i = 0; i < n2; i++) {
            scanf("%d", &matrix2[i][0]);
        }

        for (int i = 0; i < n1; i++) {
            printf("%d ", matrix1[i][0] * matrix2[i][0]);
        }
        printf("\n");
    }

    return 0;
}
