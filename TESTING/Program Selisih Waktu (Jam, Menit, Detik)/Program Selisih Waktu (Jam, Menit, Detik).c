#include<stdio.h>

typedef struct {
    int h, m, s;
} time;

time waktu[3];
void hitung(void);

int main() {
    printf(" -----------------------------------\n");
    printf("| PROGRAM PENGHITUNG SELISIH WAKTU  |\n");
    printf(" -----------------------------------\n");
    printf("Enter start time:\n");
    printf("Enter hours, minutes and second respectively: ");
    scanf("%d", &waktu[0].h);
    fflush(stdin);
    scanf("%d", &waktu[0].m);
    fflush(stdin);
    scanf("%d", &waktu[0].s);
    fflush(stdin);

    printf("Enter stop time:\n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d", &waktu[1].h);
    fflush(stdin);
    scanf("%d", &waktu[1].m);
    fflush(stdin);
    scanf("%d", &waktu[1].s);
    fflush(stdin);
    hitung();
    printf("TIME DIFFERENCE: %d:%d:%d - %d:%d:%d = %d:%d:%d", waktu[0].h, waktu[0].m, waktu[0].s, waktu[1].h, waktu[1].m, waktu[1].s, waktu[2].h, waktu[2].m, waktu[2].s);
}

void hitung(void) {
    waktu[2].h = waktu[0].h - waktu[1].h;
    waktu[2].m = waktu[0].m - waktu[1].m;
    waktu[2].s = waktu[0].s - waktu[1].s;
}

