#include <stdio.h>

int main() {
    int a, b, c;
    int jumlah, selisih, perkalian;
    float pembagian, rata_rata;
    
    printf("Silahkan masukkan tiga bilangan bulat: ");
    printf("\nBilangan pertama: ");
    scanf("%d", &a);
    printf("Bilangan kedua: ");
    scanf("%d", &b);
    printf("Bilangan ketiga: ");
    scanf("%d", &c);

    jumlah = a + b + c;
    selisih = a - b - c;
    perkalian = a * b * c;
    pembagian = (float)a / b / c;
    rata_rata = (float)jumlah / 3;

    printf("\nHasil penjumlahan: %d + %d + %d = %d", a, b, c, jumlah);
    printf("\nHasil selisih: %d - %d - %d = %d", a, b, c, selisih);
    printf("\nHasil perkalian: %d * %d * %d = %d", a, b, c, perkalian);
    printf("\nHasil pembagian: %d / %d / %d = %.2f", a, b, c, pembagian);
    printf("\nHasil rata-rata: (%d + %d + %d)/3 = %.2f", a, b, c, rata_rata);

    return 0;
}