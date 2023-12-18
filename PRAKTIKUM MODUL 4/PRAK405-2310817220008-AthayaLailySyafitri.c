#include <stdio.h>

int main() {
    int n, kelipatan;
    scanf("%d %d", &n, &kelipatan);

    int total = 0;
    for (int i = 1; i <= n; i++) {
        int sum_result = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, kelipatan);
            sum_result += j * kelipatan;
            if (j > 1) {
                printf(" + ");
            }
        }
        total += sum_result;
        printf(" = %d\n", sum_result);
    }

    printf("%d\n", total);

    return 0;
}
