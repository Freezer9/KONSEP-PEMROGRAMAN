#include<stdio.h>

int main()
{
    float uang_rupiah, uang_dolar;

    printf("Konversi dolar US ke Rupiah:");
    scanf("%f", &uang_dolar);

    uang_rupiah = uang_dolar*11090;

    printf("Hasil konversi: Rp%0.0f,-\n", uang_rupiah);

    return 0;
}
