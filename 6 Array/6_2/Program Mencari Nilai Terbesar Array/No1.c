#include<stdio.h>
#define MAKS 10

void input(void);
void findmax(int[]);

int data, i, nilai[MAKS], max;

int main()
{
    puts("==============================================");
    puts("==== Program Mencari Nilai Terbesar Array ====");
    puts("==============================================");
    input();
}

void input(void)
{
    printf("Input Berapa Data: ");
    scanf("%i", &data);
    printf("\n");

    for(i = 1; i <= data; i++)
    {
        printf("Masukkan Data %i: ", i);
        scanf("%i", &nilai[i]);
    }
    printf("\n");
    findmax(nilai);
}

void findmax(int hasil[])
{
    max = hasil[1];
    for(i = 1; i <= data; i++)
    {
        if(hasil[i] >= max)
            max = hasil[i];
    }
    printf("Nilai terbesar pada array = %i\n", max);
}
