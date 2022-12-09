#include<stdio.h>
#include<stdlib.h>
float radian(float);

int main()
{
    float bil, hasil;

    puts("Konversi Besaran Sudut dari Derajat ke Radian");
    printf("Masukkan besaran: ");
    scanf("%g", &bil);
    hasil = radian(bil);
}

float radian(float x)
{
    float hasil;
    hasil = x / 180.0f * 3.14159f;

    printf("Hasil Konversi: %g", hasil);
}
