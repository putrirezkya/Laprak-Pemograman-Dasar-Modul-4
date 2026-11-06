#include <stdio.h>

int main() {
    int n, kelipatan, total, jumlah;

    while (1) {
        printf("\nMasukkan banyaknya baris (0 untuk selesai): ");
        scanf("%d", &n);

        printf("Masukkan kelipatan: ");
        scanf("%d", &kelipatan);

        if (n == 0) {
            break;
        }

        total = 0;

        for (int i = 1; i <= n; i++) {
            jumlah = 0;

            for (int j = i; j >= 1; j--) {
                printf("(%d * %d)", j, kelipatan);

                if (j > 1) {
                    printf(" + ");
                }

                jumlah += j * kelipatan;
            }

            printf(" = %d\n", jumlah);
            total += jumlah;
        }

        printf("%d\n", total);
    }

    return 0;
}