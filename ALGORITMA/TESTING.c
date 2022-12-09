#include<stdio.h>

int main()
{
    int i, j, k;

    for(i = 1; i <= 8; i++){
        k = 0;
        for(j = 1; j <= i; j++){
            k += j;
        }
        printf("%d", k);
    }
    return 0;
}
