#include <stdio.h>
#include <string.h>

int main() {
    char kode[100], pesan[100];

    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    int jumlahBintang = 0, jumlahPagar = 0;

    for (int i = 0; i < strlen(kode); i++) {
        if (kode[i] == pesan[i]) {
            pesan[i] = '*';
            jumlahBintang++;
        } else {
            pesan[i] = '#';
            jumlahPagar++;
        }
    }

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        printf("%s\n", pesan);
        printf("* = %d\n", jumlahBintang);
        printf("# = %d\n", jumlahPagar);

        if (jumlahBintang >= jumlahPagar) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan palsu\n");
        }
    }

    return 0;
}
