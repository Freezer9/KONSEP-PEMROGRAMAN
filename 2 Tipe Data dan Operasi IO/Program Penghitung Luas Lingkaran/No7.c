#include<stdio.h>

int main()
{
    float jari, hasil;

    printf("Kalkulator Penghitung Luas Lingkaran\nMasukkan Luas Lingkaran:");
    scanf("%f", &jari);
    printf("Luas Lingkaran %f : %f", jari, hasil = 3.14 * jari * jari);

    return 0;
}
