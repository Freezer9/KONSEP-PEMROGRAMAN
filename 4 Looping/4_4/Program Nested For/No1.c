#include<stdio.h>

int main()
{
    int i, j, n;

    printf("Masukkan Berapa kali Program: ");
    scanf("%d", &j);

    for(i = 1; i <= j; i++){
        for(n =1; n <= j; n++){
            printf("%2d ", i);
        }
        printf("\n");
    }

    return 0;
}
