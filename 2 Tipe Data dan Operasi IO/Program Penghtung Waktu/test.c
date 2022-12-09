#include<stdio.h>

int main()
{
    int jam, menit, detik, hasil;

    printf("Masukkan Bilangan Detik: ");
    scanf("%i", &detik);

    jam = detik / 3600;
    menit = (detik % 3600) / 60;
    detik = (detik % 3600) % 60;

    printf("Jam = %d, Menit = %d, Detik = %d\n", jam, menit, detik);

    return 0;
}
