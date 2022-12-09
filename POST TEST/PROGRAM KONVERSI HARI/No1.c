#include<stdio.h>

int main()
{
    int i, bil, hari, minggu, tahun, sisa_thn, sisa_mng;

    puts("Konversi Hari Menjadi Tahun Minggu dan Hari");
    printf("Masukkan Berapa Hari: ");
    scanf("%d", &bil);

    tahun = bil/365;
    sisa_thn = bil%365;

    minggu = sisa_thn/7;
    sisa_mng = sisa_thn%7;

    printf("Hasil konversi adalah %d tahun %d minggu %d hari ", tahun, minggu, sisa_mng);
    printf("\n");

    return 0;
}
