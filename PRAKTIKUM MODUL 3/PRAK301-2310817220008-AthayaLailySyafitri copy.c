#include <stdio.h>

int main () {
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("%d %d\n", a, b);
    return 0;
}