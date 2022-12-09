#include<stdio.h>

int main()
{
    int pilih;
    char hari;

    puts("Pilih hari yang Anda inginkan");
    puts("1. Senin\n2. Selasa\n3. Rabu\n4. Kamis\n5. Jum'at\n6. Sabtu\n7. Minggu");
    printf("Masukkan pilihan Anda: ");
    scanf("%i", &pilih);

    if(pilih == 1)
        printf("Pilihan Anda = Senin\nSelesai");
    else if(pilih == 2)
        printf("Pilihan Anda = Selasa\nSelesai");
    else if(pilih == 3)
        printf("Pilihan Anda = Rabu\nSelesai");
    else if(pilih == 4)
        printf("Pilihan Anda = Kamis\nSelesai");
    else if(pilih == 5)
        printf("Pilihan Anda = Jumat\nSelesai");
    else if(pilih == 6)
        printf("Pilihan Anda = Sabtu\nSelesai");
    else if(pilih == 7)
        printf("Pilihan Anda = Minggu\nSelesai");
    else
        printf("Invalid Input!");

        return 0;
}

