#include<stdio.h>
#include<stdlib.h>

void menu(void);
int tambah(int, int);
int kurang(int , int);
int kali(int, int);
int bagi(int, int);
int modulus(int, int);

void menu(void)
{
    puts("==== Menu Kalkulator ====");
    puts("Pilih Operasi");
    puts("1. Tambah");
    puts("2. Kurang");
    puts("3. Kali");
    puts("4. Bagi");
    puts("5. Modulus");
}

int main()
{
    char lagi = 'y';

    while(lagi == 'y' || lagi == 'Y'){
    int input, nilai1, nilai2, result;

    menu();

    printf("Masukkan pilihan: ");
    scanf("%d", &input);
    fflush(stdin);

    printf("Masukkan 2 bilangan yang akan dioperasikan!\nPisahkan dengan koma: ");
    scanf("%d, %d", &nilai1, &nilai2);
    fflush(stdin);

    switch(input){
        case 1:
            result = tambah(nilai1, nilai2);
            break;
        case 2:
            result = kurang(nilai1, nilai2);
            break;
        case 3:
            result = kali(nilai1, nilai2);
            break;
        case 4:
            result = bagi(nilai1, nilai2);
            break;
        case 5:
            result = modulus(nilai1, nilai2);
            break;
        default:
            printf("Error Choice! Try Again!\n");
            exit(0);
        }

        printf("Hasil = %d\n", result);
        printf("Try Again? (y/t): ");
        scanf("%c", &lagi);
        fflush(stdin);
        printf("\n");
    }
    return 0;
}

int tambah(int bil1, int bil2)
{
    return(bil1 + bil2);
}

int kurang(int bil1, int bil2)
{
    return(bil1 - bil2);
}

int kali(int bil1, int bil2)
{
    return(bil1 * bil2);
}

int bagi(int bil1, int bil2)
{
    return(bil1 / bil2);
}

int modulus(int bil1, int bil2)
{
    return(bil1 % bil2);
}

