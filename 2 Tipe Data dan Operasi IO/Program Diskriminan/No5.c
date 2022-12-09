#include<stdio.h>

int main()
{
    int a, b, c, D;

    printf("Masukkan nilai X:");
    scanf("%i", &a);

    printf("Masukkan nilai Y:");
    scanf("%i", &b);

    printf("Masukkan nilai Z:");
    scanf("%i", &c);

    D = b*b - 4*a*c;

    printf("Hasil Diskriminan %i", D);

    return 0;
}
