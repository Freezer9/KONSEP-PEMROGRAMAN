#include<stdio.h>

int main()
{
    int uang_rupiah, uang_dolar;

    printf("Konversi dolar US ke Rupiah:");
    scanf("%i", &uang_dolar);

    uang_rupiah = uang_dolar*11090;

    printf("Hasil konversi: %i\n", uang_rupiah);

    return 0;
}
