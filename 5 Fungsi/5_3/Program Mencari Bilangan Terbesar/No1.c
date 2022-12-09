#include<stdio.h>
#include<stdlib.h>
int maximum(int, int);

int main()
{
    int bil1, bil2, hasil;
    printf("Masukkan bilangan 1: ");
    scanf("%d", &bil1);
    fflush(stdin);
    printf("Masukkan bilangan 2: ");
    scanf("%d", &bil2);

    hasil = maximum(bil1, bil2);

    if(bil1==bil2)
        printf("Nilai %d sama dengan %d\n", bil1, bil2);
    else
        printf("Bilangan terbesar adalah %d\n", hasil);

    return 0;
}

int maximum(int x, int y)
{
    if(x==y)
        return(0);
    else if(x>y)
        return x;
    else
        return y;
}
