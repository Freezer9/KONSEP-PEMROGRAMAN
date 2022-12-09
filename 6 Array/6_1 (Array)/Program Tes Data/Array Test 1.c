#include<stdio.h>
#include<stdlib.h>
#define MAKS 5

int main()
{
    int i, n;
    float nilai[MAKS], total = 0, rata = 0;

    puts("==== Program Masukkan Data ====");
    printf("Masukkan berapa data: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        printf("Masukkan data ke %d: ", i+1);
        scanf("%f", &nilai[i]);
        total = total + nilai[i];
        }
    rata = total / n;

    printf("\nTotal Nilai: %g\n", total);
    printf("Nilai Rata : %g\n", rata);

    return 0;
}
