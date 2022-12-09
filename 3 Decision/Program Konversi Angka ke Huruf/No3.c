#include<stdio.h>

int main()
{
    int nilai_angka;

    puts("Konversi Nilai Angka ke Nilai huruf");
    printf("Masukkan Angka: ");
    scanf("%i", &nilai_angka);

    if(nilai_angka <= 40)
        printf("E");
    else if((nilai_angka > 40) && (nilai_angka <= 55))
        printf("D");
    else if((nilai_angka > 55) && (nilai_angka <= 60))
        printf("C");
    else if((nilai_angka > 60) && (nilai_angka <= 80))
        printf("B");
    else if((nilai_angka > 80) && (nilai_angka <= 100))
        printf("A");
    else
        printf("Diluar konversi");

    return 0;
}
