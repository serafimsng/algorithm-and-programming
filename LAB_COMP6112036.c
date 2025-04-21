#include <stdio.h>

// Pada sebuah supermarket membuat program hadiah dengan memberikan kupon undian kepada pembeli. 
// Kupon undian akan diberikan jika total pembelian minimal Rp. 100.000,00 dan dan akan dihitung kelipatannya. 
// Diskon 5% jika tota pembelian minimal Rp. 100.000,00.

// Misal: seorang pembeli dengan total pembelian Rp. 250.000,00 maka dapat kupon undian sebanyak 2 lembar. 
// Dan dapat diskon sebesar Rp. 25.000,00, maka yang dibayar sebesar Rp. 225.000,00.

int main() {
    int total_belanja, kupon, diskon, total_bayar;
    printf("Masukkan total belanja: ");
    scanf("%d", &total_belanja);

    kupon = total_belanja / 100000;
    printf("Total kupon undian: %d\n", kupon);

    if (total_belanja >= 100000) {
        diskon = total_belanja * 0.05;
        printf("Diskon: %d\n", diskon);
    } else {
        diskon = 0;
        printf("Tidak ada diskon\n");
    }

    total_bayar = total_belanja - diskon;
    printf("Total yang harus dibayar: %d\n", total_bayar);

    return 0;
}
