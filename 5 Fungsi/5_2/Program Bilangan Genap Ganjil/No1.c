#include<stdio.h>
#include<stdlib.h>

int ganjil(int);

int main()
{
    int bil, hasil;

    printf("Masukkan Bilangan: ");
    scanf("%d", &bil);

    printf("%d adalah bilangan ", bil);
    if(hasil)
        printf("Genap\n");
    else
        printf("Ganjil\n");
}


int ganjil(int x)
{
    if(x%2 == 0)
        return (0);

    else
        return (1);

}
