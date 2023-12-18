#include <stdio.h>

int main () {
    //test case 1
    float a1, b1, i1, j1, x1, y1;

    scanf("%f", &a1);
    scanf("%f", &b1);
    scanf("%f", &i1);
    scanf("%f", &j1);
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("%.3f", (a1 - b1) * (i1 / j1) - (x1 + y1));
    
    //test case 2
    float a2, b2, i2, j2, x2, y2;
    
    scanf("%f %f", &a2, &b2);
    scanf("%f %f", &i2, &j2);
    scanf("%f %f", &x2, &y2);
    printf("%.3f", (a2 - b2) * (i2 / j2) - (x2 + y2));
    return 0;
}