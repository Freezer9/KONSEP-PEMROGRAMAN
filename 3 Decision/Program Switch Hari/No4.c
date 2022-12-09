#include<stdio.h>

int main()
{
    int pilih;

    puts("Pilih hari yang Anda inginkan");
    puts("1. Senin\n2. Selasa\n3. Rabu\n4. Kamis\n5. Jum'at\n6. Sabtu\n7. Minggu");
    printf("Masukkan pilihan Anda: ");
    scanf("%i", &pilih);

    switch(pilih){
        case 1:
            printf("Pilihan Anda = Senin\nSelesai");
            break;
        case 2:
            printf("Pilihan Anda = Selasa\nSelesai");
            break;
        case 3:
            printf("Pilihan Anda = Rabu\nSelesai");
            break;
        case 4:
            printf("Pilihan Anda = Kamis\nSelesai");
            break;
        case 5:
            printf("Pilihan Anda = Jumat\nSelesai");
            break;
        case 6:
            printf("Pilihan Anda = Sabtu\nSelesai");
            break;
        case 7:
            printf("Pilihan Anda = Minggu\nSelesai");
            break;
        default:
            printf("Invalid Input!");
            break;}

        return 0;
}
