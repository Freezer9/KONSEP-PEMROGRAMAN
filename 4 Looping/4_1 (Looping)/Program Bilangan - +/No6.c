#include<stdio.h>

int main()
{
    int i, bil;

    printf("Masukkan Bilangan: ");
    scanf("%d", &bil);

    for(i = 1; i <= bil; i++){
        if(i%2 != 0)
            printf("%d ", i);
        else
            printf("-%d ", i);
    }
    return 0;
}

