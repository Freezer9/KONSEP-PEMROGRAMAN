#include<stdio.h>
#include<string.h>
#define MAX 20

void menu(void);
void pesan(void);
void nota(void);

struct isi {
    char kode;
    int qty;
    int harga;
} mesan[MAX], pesanan[MAX];

int main() {
    menu();
    pesan();
    return 0;
}

void menu(void) {
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

int ke = 1;

void pesan(void) {
    char lagi;
    for(int i = 0; i < ke; i++) {
        do {
            printf("Pesanan ke - %d\n", ke++);
            printf("Jenis (D/P/S)   : ");
            scanf("%c", &mesan[i].kode);
            fflush(stdin);
            printf("Jumlah          : ");
            scanf("%d", &mesan[i].qty);
            fflush(stdin);
            i++;
            printf("Ada lagi (y/t)? : ");
            lagi = getchar();
            fflush(stdin);
            printf("\n");
        } while(lagi == 'Y' || lagi == 'y');
        break;
    }
    system("cls");
    nota();
}

void nota(void) {
    char jenis[20];
    int harga, bayar = 0, pajak = 0, jumlah = 0, total = 0;
    puts("Nota Belanja Anda : ");
    puts("");
    puts("                  GEROBAK FRIED CHICKEN                     ");
    puts("============================================================");
    puts("No.\tJenis Potong\tHarga Satuan\tQty\tJumlah Harga");
    puts("============================================================");
    for(int i = 0; i < ke-1; i++) {
        switch(mesan[i].kode) {
            case 'D' : case 'd' :
                strcpy(jenis,"DADA");
                harga = 5000;
                break;
            case 'P' : case 'p' :
                strcpy(jenis,"PAHA");
                harga = 4000;
                break;
            case 'S' : case 's' :
                strcpy(jenis,"SAYAP");
                harga = 3000;
                break;
        }
        pesanan[i].qty = mesan[i].qty;
        pesanan[i].harga = pesanan[i].qty * harga;
        printf("%d\t%s\tRp.%5.2d\t%d\tRp.%10.2d\n", i+1, jenis, harga, pesanan[i].qty, pesanan[i].harga);
        total = total + pesanan[i].harga;
        pajak = total * 0.1;
        bayar = total + pajak;
    }
    puts("============================================================");
    printf("                               Jumlah bayar Rp.%8.2d\n", total);
    printf("                                  Pajak 10% Rp.%8.2d\n", pajak);
    printf("                                TOTAL BAYAR Rp.%8.2d\n", bayar);
    puts("");
    puts("              TERIMA KASIH ATAS KUNJUNGAN ANDA\n            ");
}
