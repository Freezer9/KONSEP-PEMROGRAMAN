#include<stdio.h>

int main()
{
    int j, bil, ke = 0;

    printf("Bilangan ke-n: ");
    scanf("%d", &bil);

    while(ke <= bil){
        for(j = 1; j <= bil; j++){
        printf("%4d", ke);
        ke += j;
        }
    }
    return 0;
}
