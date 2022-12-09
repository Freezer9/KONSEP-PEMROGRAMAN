#include<stdio.h>

int main()
{
    float bil1, bil2, hasil;

    printf("Masukkan Bilangan Pertama:\n");
    scanf("%f", &bil1);

    fflush(stdin);

    printf("Masukkan Bilangan Kedua:\n");
    scanf("%f", &bil2);

    if(bil2 == 0)
        printf("division by zero");
    else
    {
        hasil = bil1 / bil2;
        printf("Hasil Akhir: %0.3f", hasil);
    }

        return 0;
}
