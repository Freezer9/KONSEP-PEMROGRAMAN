#include<stdio.h>

main()
{
    float hasil, bil1, bil2;

    printf("Masukkan Bilangan Pertama:");
    scanf("%f", &bil1);
    fflush(stdin);
    printf("Masukkan Bilangan Kedua:");
    scanf("%f", &bil2);

    if(bil2 == 0){
        printf("division by zero");
    }else{
        hasil = bil1 / bil2;
        printf("Hasil akhir %5.3f", hasil);
        }

    return 0;
}
