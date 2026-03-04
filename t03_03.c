#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int angka, prev;
    int min, max;
    int total = 0;

    // baca angka pertama
    scanf("%d", &angka);
    min = max = angka;
    total += angka;
    prev = angka;

    double max_avg_pair = -1000.0;  // nilai awal kecil

    // baca sisa angka
    for(int i = 1; i < n; i++) {
        scanf("%d", &angka);

        // cari min & max
        if(angka < min)
            min = angka;
        if(angka > max)
            max = angka;

        total += angka;

        // hitung rata-rata pasangan berurutan
        double avg_pair = (prev + angka) / 2.0;
        if(avg_pair > max_avg_pair)
            max_avg_pair = avg_pair;

        prev = angka;  // simpan untuk iterasi berikutnya
    }

    double avg_total = total / (double)n;

    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.2f\n", avg_total);
    printf("%.2f\n", max_avg_pair);

    return 0;
}