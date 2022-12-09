#include<stdio.h>
#include<stdlib.h>
#define MAX 50

struct mahasiswa {
    int tu, uts, uas, akhir;
    char nama[MAX], grade;
} data[MAX];

void input(void);
void tampil(struct mahasiswa[MAX], int);
void nilai_akhir(struct mahasiswa[MAX], int);

int main() {
    input();
}

void input(void) {
    int i, ke = 1, jumlah;
    puts("MENGHITUNG NILAI AKHIR");
    puts("MATA KULIAH KONSEP PEMROGRAMAN");
    printf("\nBerapa Jumlah Mahasiswa? : ");
    scanf("%d", &jumlah);
    printf("\nMasukkan DATA Mahasiswa\n");
    puts(" ");

    for(i = 0; i < jumlah; i++) {
        printf("Mahasiswa ke-%d\n", ke++);
        printf("Nama        : ");
        scanf("%s", &data[i].nama);
        fflush(stdin);

        printf("Nilai Tugas : ");
        scanf("%d", &data[i].tu);
        fflush(stdin);

        printf("Nilai UTS   : ");
        scanf("%d", &data[i].uts);
        fflush(stdin);

        printf("Nilai UAS   : ");
        scanf("%d", &data[i].uas);
        fflush(stdin);
        puts(" ");
    }
    nilai_akhir(data, jumlah);
    system("cls");
    tampil(data, jumlah);
}

void tampil(struct mahasiswa hasil[MAX], int jmlh) {
    int ke = 1;

    puts("                                  DAFTAR NILAI");
    puts("                          MATAKULIAH KONSEP PEMROGRAMAN");
    puts("-------------------------------------------------------------------------------------");
    puts("No    Nama             Nilai       Nilai       Nilai       Nilai       Grade");
    puts("      Mahasiswa        Tugas       UTS         UAS         Akhir             ");
    puts("-------------------------------------------------------------------------------------");
    for(int i = 0; i < jmlh; i++) {
        printf("%2d    %s\t\t%2d          %2d          %2d          %2d          %c\n", ke++, hasil[i].nama, hasil[i].tu, hasil[i].uts, hasil[i].uas, hasil[i].akhir, hasil[i].grade);
    }
    puts("-------------------------------------------------------------------------------------\n");
    printf("Total Mahasiswa = %d\n", jmlh);
}

void nilai_akhir(struct mahasiswa nilai[MAX], int brp) {
    char grade;

    for (int i = 0; i < brp; i++) {
        nilai[i].akhir = nilai[i].tu * 0.2 + nilai[i].uts * 0.4 + nilai[i].uas * 0.4;
        if(nilai[i].akhir >= 80) {
            nilai[i].grade = 'A';
        } else if (nilai[i].akhir >= 70 && nilai[i].akhir < 80) {
            nilai[i].grade = 'B';
        } else if (nilai[i].akhir >= 60 && nilai[i].akhir < 70) {
            nilai[i].grade = 'C';
        } else if (nilai[i].akhir >= 50 && nilai[i].akhir < 60) {
            nilai[i].grade = 'D';
        } else {
            nilai[i].grade = 'E';
        }
    }
}








