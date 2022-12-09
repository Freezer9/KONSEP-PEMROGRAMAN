#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

struct belanja {
    char ukuran;
    int qty, harga, satuan, diskon;
} data[MAX];

void intro(void);
void input(struct belanja[]);
void nota(struct belanja[]);

int jmlh;

int main() {
    intro();
}

void intro(void) {
    puts(" Toko LARIS");
    puts(" Daftar Harga");
    puts(" -------------------------------------------------------- ");
    puts("Ukuran Baju       Nama Ukuran         Harga per potong    ");
    puts(" -------------------------------------------------------- ");
    puts("     S               Small               Rp.36.000,-      ");
    puts("     M               Medium              Rp.43.000,-      ");
    puts("     L               Large               Rp.62.000,-      ");
    puts(" --------------------------------------------------------\n");
    puts("Dapatkan diskon 20% untuk pembelian lebih dari 10 potong...");
    puts("Jangan lupa, pajaknya ya.. <10% x <harga-diskon>\n        ");
    input(data);
    nota(data);
    return 0;
}

void input(struct belanja input[]) {
    printf("Berapa Jumlah data <maks 3> ?: ");
    scanf("%d", &jmlh);
    fflush(stdin);

    for(int i = 0; i < jmlh; i++) {
        printf("Data ke - %d", i + 1);
        fflush(stdin);

        printf("\nUkuran (S/M/L)      : ");
        scanf("%c", &input[i].ukuran);
        fflush(stdin);
        printf("Jumlah beli         : ");
        scanf("%d", &input[i].qty);
        puts(" ");
    }
}

void nota(struct belanja beli[]) {
    float total = 0, pajak, bayar;
    float harga, diskon;
    char jenis[20];
    puts("Nota Belanja Anda   : \n");
    puts("                                      TOKO LARIS\n                                ");
    puts("==================================================================================");
    puts("No      Nama Ukuran     Harga Satuan    Qty        Diskon        Jumlah Harga   ");
    puts("==================================================================================");
    for(int i = 0; i < jmlh; i++) {
        switch(beli[i].ukuran) {
            case 'S' : case 's' :
                strcpy(jenis,"SMALL");
                harga = 36000;
            break;
            case 'M' : case 'm' :
                strcpy(jenis,"MEDIUM");
                harga = 43000;
            break;
            case 'L' : case 'l' :
                strcpy(jenis,"LARGE");
                harga = 62000;
            break;
        }
        if(beli[i].qty>10)
            diskon = harga * beli[i].qty * 0.2;
        else
            diskon = 0;
        printf("%d\t%s\t\tRp%5.2f\t%d\tRp%10.2f\tRp%10.2f\n", i + 1, jenis, harga,
        beli[i].qty, diskon, harga * beli[i].qty);

        total = total + harga * beli[i].qty - diskon;
        pajak = total * 0.1;
        bayar = total + pajak;

    }
    puts("==================================================================================");
    printf("                                              Jumlah bayar      Rp%10.2f\n       ", total);
    printf("                                       Pajak 10%         Rp%10.2f\n       ", pajak);
    printf("                                       TOTAL BAYAR       Rp%10.2f\n       ", bayar);
    puts("\n                          TERIMA KASIH ATAS KUNJUNGAN ANDA                  \n");
}
