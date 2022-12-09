#include<stdio.h>
#include<stdlib.h>
int pengubah(int*, int*);

main()
{
    int bil1, bil2, hasil;

    printf("Masukkan Bilangan 1: ");
    scanf("%d", &bil1);
    fflush(stdin);
    printf("Masukkan Bilangan 2: ");
    scanf("%d", &bil2);

    printf("Nilai awal adalah (%d, %d)\n", bil1, bil2);
    pengubah(&bil1, &bil2);
    printf("Nilai akhir adalah (%d, %d)\n", bil1, bil2);

    return 0;
}

int pengubah(int *bil1, int *bil2)
{
    *bil1 += 2;
    *bil2 += 2;
}

