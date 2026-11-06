#include <stdio.h>

int main() {
    int kelipatan;
    char simbol;

    while (1) {
        printf("\nMasukkan bilangan kelipatan (0 untuk selesai): ");
        scanf("%d", &kelipatan);

        if (kelipatan == 0) {
            break;
        }

        printf("Masukkan simbol pengganti: ");
        scanf(" %c", &simbol);

        for (int i = 1; i <= 50; i++) {
            if (i % kelipatan == 0) {
                printf("%c ", simbol);
            } else {
                printf("%d ", i);
            }
        }

        printf("\n");
    }

    return 0;
}