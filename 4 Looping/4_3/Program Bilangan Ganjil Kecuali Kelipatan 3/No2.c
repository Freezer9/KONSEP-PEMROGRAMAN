#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, bil;

    puts("Menampilkan bilangan ganjil kecuali bilangan ganjil kelipatan 3:\n");
    printf("Masukkan Bilangan: ");
    scanf("%d", &bil);

    for(i = 1;i <= bil;i++){
        if((i%2==0) || (i%3==0))
            continue;
            printf("%d ", i);
    }
    return 0;
}
