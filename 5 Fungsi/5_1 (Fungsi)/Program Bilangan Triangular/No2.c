#include<stdio.h>
#include<stdlib.h>
void triangular(int);

int main()
{
    int n;

    puts("Penghitung Bilangan Triangular");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    triangular(n);

    return 0;
}

void triangular(int n){
    int i, sum = 0;

    for(i = 1; i <= n; i++){
        printf("%d ", i);
        sum += i;
        if(i != 1){
            printf("+ ");
        }
    }

    printf("Total = %d\n", sum);
}

