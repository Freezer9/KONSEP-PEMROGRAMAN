#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0, n;

    puts("Menampilkan bilangan ganjil kecuali bilangan kelipatan 7 dan 11: ");
    printf("Masukkan Bilangan 1-100: ");
    scanf("%d", &n);

    for(i = 1;i <= n;i++){
        if((i%2==0) || (i%7==0) || (i%11==0)){
            if(i >= 100){
                break;}
            continue;
                }
        printf("%i ", i);
    }
    return 0;
}
