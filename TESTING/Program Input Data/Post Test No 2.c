#include<stdio.h>

typedef struct {
    int d, m, y;
} date;

typedef struct {
    char nama[20];
    date dob;
    float nilai;
} student;

void input(student*);
void tampil(student*);

int main() {
    student mhs;
    input(&mhs);
    tampil(&mhs);
}

void input(student *data_mhs) {
    printf("Masukkan Nama: ");
    fgets(data_mhs->nama, sizeof(data_mhs->nama), stdin);
    printf("Masukkan Tanggal Lahir (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &data_mhs->dob.d, &data_mhs->dob.m, &data_mhs->dob.y);
    fflush(stdin);
    printf("Masukkan nilai: ");
    scanf("%f", &data_mhs->nilai);
    fflush(stdin);
}

void tampil(student *data_mhs) {
    puts("\n- Hasil Input -\n");
    printf("Nama    = %s", data_mhs->nama);
    printf("TTL     = %d-%d-%d\n", data_mhs->dob.d, data_mhs->dob.m, data_mhs->dob.y);
    printf("Nilai   = %.2f\n", data_mhs->nilai);
}
