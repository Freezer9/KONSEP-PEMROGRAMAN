#include<stdio.h>

int main()
{
    int bil1, bil2, sum;

    printf("Insert Value 1:\n");
    scanf("%i", &bil1);

    printf("Insert Value 2:\n");
    scanf("%d", &bil2);

    sum = bil1 + bil2;

    printf("Hasil penjumlahan %i dengan %i adalah %i", bil1, bil2, sum);

    return 0;
}
