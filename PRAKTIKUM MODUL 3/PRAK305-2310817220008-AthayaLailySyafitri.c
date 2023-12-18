#include <stdio.h>

int main () {
    int totaldetik, jam, menit, detik;
    scanf("%d", &totaldetik);

    jam = totaldetik / 3600;
    totaldetik %= 3600;
    menit = totaldetik / 60;
    detik = totaldetik % 60;

    if (jam >= 24) {
        int hari = jam / 24;
        jam %= 24;
        printf("%d hari:%02d:%02d:%02d\n", hari, jam, menit, detik);
    }
    else {
        printf("%02d:%02d:%02d", jam, menit, detik);
    }

return 0;
}