#include <stdio.h>

int main()
{
    char nama;
    int nilai1, tgl, bln, thn;

    puts("Percobaan Pemrograman Data Pribadi");

    printf("Nama Saya: ");
    scanf("%s", &nama);
    fflush(stdin);

    printf("Tanggal: ");
    scanf("%d", &tgl);
    fflush(stdin);

    printf("Bulan: ");
    scanf("%d", &bln);
    fflush(stdin);

    printf("Tahun: ");
    scanf("%d", &thn);

    puts("Nama saya adalah %nama Lahir pada tanggal %tgl bulan %bln tahun %thn",nama ,tgl , bln, thn);


    return 0;
}

