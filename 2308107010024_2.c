#include <stdio.h>

int main() {
    int tahun;
    printf("masukan tahun (hanya 4 digit): ");
    while (1) {
        if (scanf("%d" ,&tahun) !=1 || tahun < 1000 || tahun > 9999) {
            printf("tahun tidak valid, masukkan kembali(4 digit angka): ");
            while (getchar() != '\n');
            continue;
        }
        break;
    }

    if ((tahun % 4 == 0 && tahun %100 != 0) || tahun %400 ==0 ) {
            printf("tahun ini adalah tahun kabisat");
        }
     else {
        printf("tahun ini adalah bukan tahun kabisat");
    }
    return 0;
}