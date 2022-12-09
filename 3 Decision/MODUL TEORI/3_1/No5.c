#include<stdio.h>

int main()
{
    int tahun;

    printf("Masukkan Tahun:\n");
    scanf("%i", &tahun);

    if(tahun % 4 == 0)
        printf("Tahun Kabisat");
    else
        printf("Bukan Kabisat");

    return 0;
}
