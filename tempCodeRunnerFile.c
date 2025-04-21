#include <stdio.h>

int main() {

    int fib[10];
    int *ptr = fib;

    *ptr = 0;
    *(ptr + 1) = 1;

    for(int i = 2; i < 10; i++) {
        *(ptr + i) = *(ptr + i - 1) + *(ptr + i - 2);
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}

/*
Kesalahan:
    1. pada baris pertama #include <stdio.h> tidak ada
    2. pada baris ke-10, *(ptr + i) = *(i + ptr - 1) + *(i + ptr - 2) terdapat kesalahan dalam penulisan rumus.
    seharusnya *(ptr + i) = *(ptr + i - 1) + *(ptr + i - 2). secara aritmatika sudah benar, tetapi penulisan variabel yang salah.
*/