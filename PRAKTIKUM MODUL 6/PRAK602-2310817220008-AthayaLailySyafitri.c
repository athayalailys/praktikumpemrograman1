#include <stdio.h>

int main() {
    int jumlahRuangan;

    scanf("%d", &jumlahRuangan);

    int zetsuPutih[jumlahRuangan];

    for (int i = 0; i < jumlahRuangan; i++) {
        scanf("%d", &zetsuPutih[i]);
    }

    for (int i = 0; i < jumlahRuangan; i++) {
        printf("%d ", zetsuPutih[i] * (i + 1));
    }

    return 0;
}
