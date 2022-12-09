#include<stdio.h>

int main()
{
    int lembar, harga;
    char pelanggan;

    printf("Apakah anda pelanggan disini? (Y/T)\n");
    scanf("%c", &pelanggan);

    if((pelanggan == 'Y') || (pelanggan == 'y')){
        puts("Anda adalah pelanggan");
        printf("Berapa Lembar: ");
        scanf("%i", &lembar);
        harga = lembar * 75;
        printf("Total Biaya: %i", harga);
        return 0;}
    else
        printf("Anda bukan pelanggan setia\n");

        printf("Berapa Lembar: ");
        scanf("%i", &lembar);
        if (lembar < 100)
            harga = lembar * 150;
        else if((lembar >= 100) && (lembar <= 200))
            harga = lembar * 100;
        else
            harga = lembar * 80;

        printf("Total Biaya: %i", harga);

        return 0;
}


