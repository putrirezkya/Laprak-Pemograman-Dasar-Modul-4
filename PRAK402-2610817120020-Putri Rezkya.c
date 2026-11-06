#include <stdio.h>

int main() {
    int batas;

    while (1) {
        printf("\nMasukkan batas maksimal (0 untuk selesai): ");
        scanf("%d", &batas);

        if (batas == 0) {
            break;
        }

        for (int i = 1; i <= batas; i += 2) {
            printf("%d ", i);
        }

        printf("\n");

        int awal = batas - (batas % 2);

        for (int i = awal; i >= 2; i -= 2) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}