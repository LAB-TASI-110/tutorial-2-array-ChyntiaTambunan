#include <stdio.h>
#include <limits.h> // Untuk INT_MAX dan INT_MIN

int main() {
    int n;
    int input_num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int first_num = 0;
    int second_num = 0;
    double average_first_two = 0.0;

    // Meminta input n sampai n positif
    do {
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        // Meminta input_num sampai input_num berada dalam rentang -100 hingga 100
        do {
            scanf("%d", &input_num);
        } while (input_num < -100 || input_num > 100);

        if (i == 0) {
            first_num = input_num;
        } else if (i == 1) {
            second_num = input_num;
        }

        if (input_num < min_val) {
            min_val = input_num;
        }
        if (input_num > max_val) {
            max_val = input_num;
        }
    }

    if (n >= 2) {
        average_first_two = (double)(first_num + second_num) / 2.0;
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);
    printf("%.2f\n", average_first_two);

    return 0;
}
