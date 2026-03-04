#include <stdio.h>
#include <limits.h> // Untuk INT_MAX dan INT_MIN

int main() {
    int n;
    int input_num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int third_num = 0;
    int fourth_num = 0;
    double average_third_fourth = 0.0;

    // Meminta input n sampai n positif
    do {
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        // Meminta input_num sampai input_num berada dalam rentang -100 hingga 100
        do {
            scanf("%d", &input_num);
        } while (input_num < -100 || input_num > 100);

        // Simpan angka ke-3 dan ke-4
        if (i == 2) {
            third_num = input_num;
        } else if (i == 3) {
            fourth_num = input_num;
        }

        // Cari minimum
        if (input_num < min_val) {
            min_val = input_num;
        }

        // Cari maksimum
        if (input_num > max_val) {
            max_val = input_num;
        }
    }

    // Hitung rata-rata jika minimal ada 4 angka
    if (n >= 4) {
        average_third_fourth = (double)(third_num + fourth_num) / 2.0;
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);
    printf("%.2f\n", average_third_fourth);

    return 0;
}