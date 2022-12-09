#include<stdio.h>
#include<stdlib.h>
#define MAX 20

void menu(void);
void pesan(void);
void nota(void);
int belanja(char, int);
int pajak(int);
int qty1, qty2, qty3;
int harga1, harga2, harga3;
int bayar;


int main() {
    menu();
    pesan();
}

void menu(void) {
    puts("Program Menghitung Total Pesanan");
    puts("Toko GFC-Gerobak Fried Chicken");
    puts("");
    puts("DAFTAR HARGA");
    puts("Kode      Jenis       Harga Per Potong");
    puts("D         Dada        Rp. 5000.00     ");
    puts("P         Paha        Rp. 4000.00     ");
    puts("S         Sayap       Rp. 3000.00     ");
    puts("");
    puts("Harga belum termasuk pajak : 10%");
    puts("");
    puts("Masukkan Pesanan Anda");
}

void pesan(void) {
    int ke = 1, qty;
    char lagi, kode;
    do {
        printf("Pesanan ke - %d\n", ke++);
        printf("Jenis (D/P/S)   : ");
        scanf("%c", &kode);
        fflush(stdin);
        printf("Jumlah          : ");
        scanf("%d", &qty);
        fflush(stdin);
        belanja(kode, qty);
        printf("Ada lagi (y/t)? : ");
        lagi = getchar();
        fflush(stdin);
        puts("");
    } while (lagi == 'Y' || lagi == 'y');
    nota();
}

void nota(void) {
    puts("Program Menghitung Total Pesanan");
    puts("Nota Belanja Anda : ");
    puts("");
    puts("                  GEROBAK FRIED CHICKEN                     ");
    puts("============================================================");
    puts("No.   Jenis Potong   Harga Satuan   Qty  Jumlah Harga");
    puts("============================================================");
    printf("1.    DADA           Rp. 5000.00     %2d   Rp. %d\n", qty1, harga1);
    printf("3.    PAHA           Rp. 4000.00     %2d   Rp. %d\n", qty2, harga2);
    printf("2.    SAYAP          Rp. 3000.00     %2d   Rp. %d\n", qty3, harga3);
    puts("============================================================");
    printf("                             Jumlah bayar       Rp. %d\n", bayar);
    printf("                             Pajak 10%%          Rp. %d\n", pajak(bayar));
    printf("                             TOTAL BAYAR        Rp. %d\n", bayar + pajak(bayar));
    puts("");
    puts("              TERIMA KASIH ATAS KUNJUNGAN ANDA\n            ");
}

int belanja(char kode, int brp) {
    if(kode == 'D' || kode == 'd') {
        qty1 += brp;
        harga1 += brp * 5000;
        bayar += harga1;
    }
    else if(kode == 'P' || kode == 'p') {
        qty2 += brp;
        harga2 += brp * 4000;
        bayar += harga2;
    }
    else if(kode == 'S' || kode == 's') {
        qty3 += brp;
        harga3 += brp * 3000;
        bayar += harga3;
    }
    else
        printf("\nError Input Please Try Again!\n");
}

int pajak(int pjk) {
    int total ;
    total = pjk * 10/100;
    return total;
}
