#include<stdio.h>
#include<stdlib.h>
#define MAKS 5

void fibonacci(int, int[]);

int main()
{
    int isi[2] = {0, 1};
    int data = 0;

    puts("=================================");
    puts("==== Program Deret Fibonacci ====");
    puts("=================================");
    printf("Masukkan Berapa Deret: ");
    scanf("%d", &data);

    fibonacci(data, isi);
}

void fibonacci(int brp, int nilai[])
{
    int tukar = 0;
    for(int i=0; i < brp; i++)
    {
        printf("%d ", nilai[1]);
        tukar = nilai[1];
        nilai[1] += nilai[0];
        nilai[0] = tukar;
    }
    printf("\n");
}
