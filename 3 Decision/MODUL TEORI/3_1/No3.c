#include<stdio.h>

int main()
{
    int beli, diskon;

    printf("Masukkan Total Harga Pembelian:\n");
    scanf("%i", &beli);

    if(beli >= 100000)
    {
        diskon = beli * 0.05;
        printf("Selamat anda mendapatkan diskon ^_^\nMenjadi: Rp.%i", beli-diskon);
    }
    else
        printf("Maaf anda cupu\nSilahkan Bayar Rp.%i", beli);

}
