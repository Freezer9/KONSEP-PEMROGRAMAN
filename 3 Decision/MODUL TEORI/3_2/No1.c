#include<stdio.h>

int main()
{
    int berat;

    printf("Masukkan Berat Badan Anda:\n");
    scanf("%i", &berat);

    if(berat > 120)
        printf("Kegemukan");
    else if((berat >= 111) && (berat <= 120))
        printf("Ideal");
    else if((berat >= 100) && (berat <= 110))
        printf("Kurus");
    else
        printf("Sangat kurus");

                return 0;
}
