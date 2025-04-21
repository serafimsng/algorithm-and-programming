#include <stdio.h>

int main() {
    int nilai[5];
    int *ptr = nilai;
    int tertinggi, terendah, total = 0;
    float rata_rata;

    for (int i = 0; i < 5; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", ptr + i);
    }

    tertinggi = *ptr;
    terendah = *ptr;

    for (int i = 0; i < 5; i++)
    {
        total += *(ptr + i);
        if (*(ptr + i) > tertinggi)
        {
            tertinggi = *(ptr + i);
        }
        if (*(ptr + i) < terendah)
        {
            terendah = *(ptr + i);
        }
    }
    rata_rata = (float)total / 5;

    printf("\nNilai tertinggi: %d\n", tertinggi);
    printf("Nilai terendah: %d\n", terendah);   
    printf("Rata-rata nilai: %.2f\n", rata_rata);
    
    return 0;
}