#include<stdio.h>

int main()
{
    int sum, valid_flag;
    char letter;

    puts("Masukkan Huruf (X/Z/A): ");
    letter = getchar();

    switch(letter){
        case 'X':{
            sum = 0;
            printf("Hasil = %d", sum);
            break;
        }case 'Z':{
            valid_flag = 1;
            printf("Hasil = %d", valid_flag);
            break;
        }case 'A':{
            sum = 1;
            printf("Hasil = %d", sum);
            break;
        }default:
            printf("Unknown letter --> %c\n", letter);
            break;
            }
}
