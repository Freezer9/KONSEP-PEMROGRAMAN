#include<stdio.h>

int main()
{
    int gaji_pokok, tnjg_ism, tnjg_anak, anak, thr, tahun, pajak, transport, kerja, asuransi, total;
    char kar;

    puts("Kalkulator Penghitung Total Gaji Pokok Perusahaan\n");
    printf("Masukkan Nilai Gaji Pokok Anda          : ");
    scanf("%i", &gaji_pokok);
    fflush(stdin);

    printf("Apakah sudah menikah atau belum? (Y/T)  : ");
    kar = getchar();

    if((kar == 'Y') || (kar == 'y'))
    {
        tnjg_ism = 0.1 * gaji_pokok;
    printf("Anak Kandung                            : ");
        scanf("%i", &anak);
        tnjg_anak = 0.05 * gaji_pokok * anak;
    printf("Selamat Anda Mendapatkan Tunjangan!\n");
    }
    else
    {
        tnjg_ism = 0.1 * 0;
        tnjg_anak = 0.05 * 0;
    }

    printf("Masa Tahun Kerja                        : ");
        scanf("%i", &tahun);

    printf("Absen Bulanan (Hari)                    : ");
        scanf("%i", &kerja);

    thr = 5000 * tahun;
    pajak = 0.15 * (gaji_pokok + tnjg_ism + tnjg_anak);
    transport = 3000 * kerja;
    asuransi = 20000;
    total = gaji_pokok + tnjg_ism + tnjg_anak + thr - pajak + transport - asuransi;

    printf("(+) Gaji Pokok                          : %i\n", gaji_pokok);
    printf("(+) Tunjangan Istri/Suami               : %i\n", tnjg_ism);
    printf("(+) Tunjangan Anak                      : %i\n", tnjg_anak);
    printf("(+) THR                                 : %i\n", thr);
    printf("(+) Transport                           : %i\n", transport);
    printf("(-) Pajak                               : %i\n", pajak);
    printf("(-) Asuransi                            : %i\n", asuransi);
    printf("----------------------------------------------- +\n");
    printf("(*)Total Gaji Pokok Anda Sebesar        : %i\n", total);

}
