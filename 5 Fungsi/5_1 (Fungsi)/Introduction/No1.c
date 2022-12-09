#include<stdio.h>
void menu();

int main()
{
    int i, j;
    printf("Masukkan Perulangan: ");
    scanf("%d", &i);
    for(int j = 1; j <= i; j++)
        menu();
}

void menu(){
    puts("=============================");
    puts("\tPilihan Menu");
    puts("=============================");
}
