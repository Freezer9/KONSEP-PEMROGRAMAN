#include<stdio.h>

int main()
{
    int bil1;

    printf("Masukkan Sembarang Bilangan Bulat: ");
    scanf("%i", &bil1);

    if((bil1 >= 1) && (bil1 <= 100))
        printf("%i ada dalam range 1-100", bil1);
    else
        printf("%i di luar range 1-100", bil1);

    return 0;
}
