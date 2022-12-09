#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

typedef struct {
    int day, month, year;
} tgl;

typedef struct {
    int ID, gaji;
    char nama[MAX], jenis_kelamin;
    tgl lahir;
} pegawai;

void input(pegawai*);
void tampil(pegawai*);

int jmlh;

int main() {
    pegawai masuk[MAX];
    input(masuk);
    tampil(masuk);
}

void input(pegawai *data) {
    puts("          DATA PEGAWAI            \n");
    printf("Berapa jumlah pegawai : ");
    scanf("%d", &jmlh);
    puts(" ");
    for(int i = 0; i < jmlh; i++) {
        printf("Data pegawai ke-%d\n", i+1);
        fflush(stdin);
        printf("Nama                    : ");
        scanf("%s", &data->nama);
        fflush(stdin);
        printf("Tgl lahir (dd-mm-yy)    : ");
        scanf("%d-%d-%d", &data->lahir.day, &data->lahir.month, &data->lahir.year);
        fflush(stdin);
        printf("Jenis kelamin (L/P)     : ");
        scanf("%c", &data->jenis_kelamin);
        fflush(stdin);
        printf("Gaji/bln                : ");
        scanf("%d", &data->gaji);
        puts(" ");
        data++;
    }
    system("cls");
}

void tampil(pegawai *hasil) {
    char jenis[20];
    puts("Data pegawai yang telah diinputkan\n");
    for(int i = 0; i < jmlh; i++) {
            switch(hasil->jenis_kelamin) {
            case 'L' : case 'l' :
                strcpy(jenis,"Laki-laki");
            break;
            case 'P' : case 'p' :
                strcpy(jenis,"Perempuan");
            break;
            default:
                strcpy(jenis,"Kamu gey");
            break;
        }
        printf("No id           : %d\n", i+1);
        printf("Nama            : %s\n", hasil->nama);
        printf("Tgl lahir       : %d-%d-%d\n", hasil->lahir.day, hasil->lahir.month, hasil->lahir.year);
        printf("Jenis kelamin   : %s\n", jenis);
        printf("Gaji/bln        : Rp %d\n", hasil->gaji);
        puts(" ");
        hasil++;
    }
}

