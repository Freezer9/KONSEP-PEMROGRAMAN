#include<stdio.h>

int main()
{
    int pilih, gaji_pokok, total, tunjangan;
    char input;

    puts("==== Program Penghitung Honor Pegawai ====");
    puts("1. Programmer Junior");
    puts("2. Programmer Senior");
    puts("3. Data Analis");
    puts("4. Project Manager");
    puts("5. Dll.");
    puts("Gaji Pokok = Rp.2.000.000");
    printf("Apa Jabatan Anda? ");
    scanf("%i", &pilih);
    fflush(stdin);

    switch(pilih){
        case 1:
            tunjangan = 1000000;
            break;
        case 2:
            tunjangan = 1250000;
            break;
        case 3:
            tunjangan = 1500000;
            break;
        case 4:
            tunjangan = 2000000;
            break;
        case 5:
            tunjangan = 500000;
            break;
        default:
            printf("Input tidak ada!\n");
            exit (0);
            }

    printf("Apakah anda memiliki sertifikasi? (Y/T) ");
    scanf("%c", &input);
    gaji_pokok = 2000000;

    if(input == 'y' || input == 'Y')
        total = gaji_pokok + tunjangan + (tunjangan * 0.1);
    else if(input == 't' || input =='T'){
        total = gaji_pokok + tunjangan;
        printf("Maaf anda tidak mendapatkan tunjangan ;(");
    }else{
        printf("Invalid Input!\n");
        exit (0);
        }

    printf("\nTotal Honor = %d\n", total);
    return 0;
}
