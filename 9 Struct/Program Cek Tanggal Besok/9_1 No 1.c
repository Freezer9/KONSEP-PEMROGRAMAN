#include<stdio.h>
#include<stdlib.h>

void skrg(void);
void bsk(void);
void cek_bulan(int, int, int);
void cek_kabisat(int);
void cek_akhirbln(int, int);

struct date {
    int tanggal, bulan, tahun;
} today, tomorrow;

int total_hari[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    char lagi;
    puts("PROGRAM MENENTUKAN HARI ESOK");
    do{
        skrg();
        bsk();
        printf("\nMau lagi (y/t)? : ");
        lagi = getchar();
        puts(" ");
    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}

void skrg(void) {
    printf("Masukkan tanggal (dd-mm-yy) : ");
    scanf("%d-%d-%d", &today.tanggal, &today.bulan, &today.tahun);
    fflush(stdin);
}

void bsk(void) {
    cek_bulan(today.tanggal, today.bulan, today.tahun);
    if(tomorrow.tanggal == 0 || tomorrow.bulan == 0)
        printf("\nINPUT INVALID!\n");
    else {
        puts("\n========= TANGGAL BESOK =========");
        printf("Besok tanggal = %2d - %2d - %2d\n", tomorrow.tanggal, tomorrow.bulan, tomorrow.tahun);
    }
}

void cek_bulan(int tgl, int bln, int thn) {
    cek_kabisat(thn);

    if(bln >= 1 && bln <= 12) {
        if(tgl > 0) {
            if(tgl < total_hari[bln - 1]) {
                tomorrow.tanggal = today.tanggal + 1;
                tomorrow.bulan = today.bulan;
                tomorrow.tahun = today.tahun;
            } else if(tgl == total_hari[bln - 1]) {
                if(bln == 12)
                    cek_akhirbln(bln, tgl);
                else {
                    tomorrow.tanggal = 1;
                    tomorrow.bulan = today.bulan + 1;
                    tomorrow.tahun = today.tahun;
                }
            } else
                tomorrow.tanggal = 0;
        } else
            tomorrow.tanggal = 0;
    } else
        tomorrow.bulan = 0;
}

void cek_kabisat(int kab) {
    // Bulan Kabisat
    if(kab % 4 == 0) {
        if(kab % 100 == 0)
            if(kab % 400 == 0)
                total_hari[1] = 29;
            else
                total_hari[1] = 28;
        else
            total_hari[1] = 29;
    } else
        total_hari[1] = 28;
}

void cek_akhirbln(int bulan, int tggl) {
    if((bulan == 12) && (tggl == 31))
        tomorrow.tanggal = 1;
        tomorrow.bulan = 1;
        tomorrow.tahun = today.tahun + 1;
}
