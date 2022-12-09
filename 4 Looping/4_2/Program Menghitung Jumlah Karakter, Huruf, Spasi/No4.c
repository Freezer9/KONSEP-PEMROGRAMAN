#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jumkar = 0, jumsp = 0, jumhrf = 0;
    char kar;

    printf("Masukkan Kalimat : ");

    while((kar = getchar()) != '\n'){
        if(kar > 1)
            jumkar++;
        if(kar >= 'X')
            jumhrf++;
        if(kar == ' ')
            jumsp++;
    }

    printf("\nJumlah karakter    = %d", jumkar);
    printf("\nJumlah huruf       = %d", jumhrf);
    printf("\nJumlah spasi       = %d", jumsp);
}
