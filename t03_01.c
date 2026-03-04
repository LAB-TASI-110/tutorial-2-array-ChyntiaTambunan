#include <stdio.h>
#include <limits.h> // Untuk INT_MAX dan INT_MIN

int main() {
    int n;
    int input_num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    // Meminta input n sampai n positif
    do {
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        // Meminta input_num sampai input_num berada dalam rentang -100 hingga 100
        do {
            scanf("%d", &input_num);
        } while (input_num < -100 || input_num > 100);

        if (input_num < min_val) {
            min_val = input_num;
        }
        if (input_num > max_val) {
            max_val = input_num;
        }
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0;
}
