#include<stdio.h>

int main()
{
    int bil1, nilai;

    printf("Masukkan Nilai Bilangan:\n");
    scanf("%i", &bil1);

    if(bil1 % 2 == 0)
        printf("Bilangan tersebut adalah bilangan genap.");
    else
        printf("Bilangan tersebut adalah bilangan ganjil.");

    return 0;
}
