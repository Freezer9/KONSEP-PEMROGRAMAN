#include<stdio.h>

int main()
{
    int celcius, fahrenheit;

    printf("Masukkan nilai Suhu Celcius:");
    scanf("%i", &celcius);

    fahrenheit = celcius * 1.8 + 32;
    printf("Nilai konversi Fahrenheit: %i\n", fahrenheit);

    return 0;
}
