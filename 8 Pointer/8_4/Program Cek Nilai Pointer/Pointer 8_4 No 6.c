#include<stdio.h>

int rotasi(int*, int*, int*);

int main() {
    int nilai1, nilai2, nilai3;
    printf("Masukkan nilai-1 : ");
    scanf("%d", &nilai1);
    printf("Masukkan nilai-2 : ");
    scanf("%d", &nilai2);
    printf("Masukkan nilai-3 : ");
    scanf("%d", &nilai3);
    printf("nilai ke-1: %d, nilai ke-2: %d, nilai ke-3: %d", nilai1, nilai2, nilai3);
    rotasi(nilai1, nilai2 ,nilai3);

}

int rotasi(int *p1, int *p2, int *p3) {
    int n1, n2, n3;
    *p1 = *p3;
    printf("nilai ke-1: %d ", *p1);
    *p2 = *p1;
    printf("nilai ke-2: %d ", *p2);
    *p3 = *p2;
    printf("nilai ke-3: %d ", *p3);
}
