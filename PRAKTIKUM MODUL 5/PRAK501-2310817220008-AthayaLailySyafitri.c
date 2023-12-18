#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int max_value = a;
    if (b > max_value) {
        max_value = b;
    }
    if (c > max_value) {
        max_value = c;
    }
    if (d > max_value) {
        max_value = d;
    }
    return max_value;
}

int main() {
    int a, b, c, d; 
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil); 
    return 0;
}
