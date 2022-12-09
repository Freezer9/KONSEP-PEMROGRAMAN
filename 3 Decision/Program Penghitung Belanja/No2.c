#include<stdio.h>

int main()
{
    int bil1, harga, total;

    printf("Masukkan Nilai Belanja: ");
    scanf("%d", &bil1);

    if(bil1 >= 100000){
            harga = bil1 * 0.05;
            printf("Total pembelian adalah Rp.%d\n", total);
            printf("Selamat anda mendapatkan diskon Rp.%d\n", harga);
            total = bil1 - harga;
    }else{
            total = bil1;
            printf("Total pembelian adalah Rp.%d\n", total);
            puts("Anda tidak mendapatkan diskon\n");
    }
    return 0;
}
