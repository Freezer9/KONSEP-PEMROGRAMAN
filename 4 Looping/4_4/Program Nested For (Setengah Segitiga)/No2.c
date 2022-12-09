#include<stdio.h>

int main()
{
    int i, j, k;

    printf("Masukkan Berapa: ");
    scanf("%d", &j);

    for(i = 1; i <= j; i++){
        for(k = 1; k <= i; k++){
            printf("%2d ", i);
        }
        printf("\n");
    }

    return 0;
}
