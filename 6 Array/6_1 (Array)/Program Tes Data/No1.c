#include<stdio.h>
#include<stdlib.h>
#define MAKS 10

void input(void);
void cetak(float []);

int i, data;

int main()
{
    float nilai[MAKS];

    puts("==== Program Masukkan Data ====");
    printf("Masukkan Berapa Data: ");
    scanf("%d", &data);

    for(i=1; i<=data; i++)
        {
        printf("Masukkan data ke %d: ", i);
        scanf("%f", &nilai[i]);
        }

    cetak(nilai);
}

void cetak(float x[])
{
    printf("Hasil Data: %g", x[1]);
    for(i=2; i<=data; i++){
        printf(", %g", x[i]);
    }
    printf("\n");
}

