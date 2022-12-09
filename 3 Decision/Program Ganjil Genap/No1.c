#include<stdio.h>

int main()
{
    int bil1, nilai;

    printf("Masukkan Nilai Bilangan: ");
    scanf("%i", &bil1);

    if(bil1 % 2 == 0)
        printf("Bilangan yang diinputkan adalah %d.\n%d adalah bilangan genap.\n", bil1, bil1);
    else
        printf("Bilangan yang diinputkan adalah %d.\n%d adalah bilangan ganjil.\n", bil1, bil1);

    return 0;
}

