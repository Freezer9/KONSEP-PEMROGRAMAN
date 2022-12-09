#include<stdio.h>
#define MAKS 10

void input(int[]);
void output(int[]);

int i, data, nilai[MAKS];
int max = 0, min = 0;

int main()
{
    puts("==========================================");
    puts("==== Program Menemukan Nilai Terbesar ====");
    puts("==========================================");
    printf("Masukkan berapa data (maks 10): ");
    scanf("%i", &data);
    input(nilai);
    printf("\n");
    output(nilai);
}

void input(int inmat[])
{
    for(i = 1; i <= data; i++)
    {
        printf("Data ke %d: ", i);
        scanf("%i", &nilai[i]);
    }
}

void output(int hasil[])
{
    max = nilai[1];
    min = nilai[1];
    for(i = 1; i <= data; i++)
    {
        if(nilai[i] >= max)
            max = nilai[i];
        else if(nilai[i] <= min)
            min = nilai[i];
    }
    printf("Nilai terbesar dalam array = %d", max);
    printf("\n");
}
