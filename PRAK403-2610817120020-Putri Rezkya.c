#include <stdio.h>

int main() {
    int a, b, x, y;

    while (1) {
        printf("\nMasukkan angka pertama (0 0 untuk selesai): ");
        scanf("%d", &a);

        printf("Masukkan angka kedua: ");
        scanf("%d", &b);

        if (a == 0 && b == 0) {
            break;
        }

        x = a;
        y = b;

        if (a < b) {
            while (x <= b) {
                printf("%d %d", x, y);

                if (x != b) {
                    printf(" - ");
                }

                x++;
                y--;
            }
        } else {
            while (x >= b) {
                printf("%d %d", x, y);

                if (x != b) {
                    printf(" - ");
                }

                x--;
                y++;
            }
        }

        printf("\n");
    }

    return 0;
}