#include<stdio.h>
#include<stdlib.h>
int prima(int);

int main()
{
    int bil, hasil;
    puts("Program Bilangan Prima");
    printf("Masukkan Bilangan: ");
    scanf("%d", &bil);

    hasil = prima(bil);
    if(hasil)
        printf("Prima\n");
    else
        printf("Bukan Prima\n");

    return 0;
}

int prima(int x)
{
    if((x == 2) || (x == 3))
        return(1);
    else((x == 1) || (x%2 == 0) || (x%3 == 0));
        return(0);
}


