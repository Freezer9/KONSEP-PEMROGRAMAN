#include<stdio.h>

//INVERTED HALF PYRAMID//
int main()
{
    int i, j;

    for(i = 10; i >= 1; i--){
        for(j = 1; j<= i; j++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
