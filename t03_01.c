#include <stdio.h>

int main() {
    int n;
    int angka;
    int min, max;
    
    // Membaca jumlah data
    scanf("%d", &n);
    
    // Membaca angka pertama sebagai nilai awal min dan max
    scanf("%d", &angka);
    min = angka;
    max = angka;
    
    // Membaca sisa angka
    for(int i = 1; i < n; i++) {
        scanf("%d", &angka);
        
        if(angka < min) {
            min = angka;
        }
        
        if(angka > max) {
            max = angka;
        }
    }
    
    // Menampilkan hasil
    printf("%d\n", min);
    printf("%d\n", max);
    
    return 0;
}