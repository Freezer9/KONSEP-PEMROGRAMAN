#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

typedef struct {
    int tu, uts, uas;
    float akhir;
    char nama[MAX], grade;
} data;

void input(data*);
void tampil(data*);
void nilai_akhir(data*);

int jumlah;

int main() {
    data data_mhs[MAX];
    input(data_mhs);
    nilai_akhir(data_mhs);
    system("cls");
    tampil(data_mhs);
}

void input(data *mahasiswa) {
    puts("MENGHITUNG NILAI AKHIR");
    puts("MATA KULIAH KONSEP PEMROGRAMAN");
    printf("\nBerapa Jumlah Mahasiswa? : ");
    scanf("%d", &jumlah);
    fflush(stdin);
    printf("\nMasukkan DATA Mahasiswa\n");
    puts(" ");

    for(int i = 0; i < jumlah; i++) {
        printf("Mahasiswa ke-%d\n", i+1);
        printf("Nama        : ");
        gets(mahasiswa->nama);
        fflush(stdin);

        printf("Nilai Tugas : ");
        scanf("%d", &mahasiswa->tu);
        fflush(stdin);

        printf("Nilai UTS   : ");
        scanf("%d", &mahasiswa->uts);
        fflush(stdin);

        printf("Nilai UAS   : ");
        scanf("%d", &mahasiswa->uas);
        fflush(stdin);
        puts(" ");

        mahasiswa++;
    }
}

void tampil(data *hasil) {
    puts("\t\t\tDAFTAR NILAI");
    puts("\t\tMATAKULIAH KONSEP PEMROGRAMAN");
    puts("-----------------------------------------------------------");
    puts("No\tNama\t\tNilai\tNilai\tNilai\tNilai\tGrade");
    puts("\tMahasiswa\tTugas\tUTS\tUAS\tAkhir             ");
    puts("-----------------------------------------------------------");
    for(int i = 0; i < jumlah; i++) {
        printf("%2d\t%s\t\t%2d\t%2d\t%2d\t%.1f\t%c\n", i+1, hasil->nama, hasil->tu, hasil->uts, hasil->uas, hasil->akhir, hasil->grade);
        hasil++;
    }
    puts("-----------------------------------------------------------\n");
    printf("Total Mahasiswa = %d\n", jumlah);
}

void nilai_akhir(data *nilai) {
    for (int i = 0; i < jumlah; i++) {
        nilai->akhir = nilai->tu * 0.2 + nilai->uts * 0.4 + nilai->uas * 0.4;
        if(nilai->akhir >= 80) {
            nilai->grade = 'A';
        } else if (nilai->akhir >= 70 && nilai->akhir < 80) {
            nilai->grade = 'B';
        } else if (nilai->akhir >= 60 && nilai->akhir < 70) {
            nilai->grade = 'C';
        } else if (nilai->akhir >= 50 && nilai->akhir < 60) {
            nilai->grade = 'D';
        } else {
            nilai->grade = 'E';
        }
        nilai++;
    }
}
