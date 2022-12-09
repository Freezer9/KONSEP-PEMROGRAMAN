#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define PI 3.14159f
float besaran(float, float);
float radian(float);

main()
{
    float sudut, panjang;

    puts("==== Program penghitung panjang sisi miring segitiga ====");
    printf("Masukkan besaran sudut BAC: ");
    scanf("%g", &sudut);
    fflush(stdin);
    printf("Masukkan panjang sisi AB: ");
    scanf("%g", &panjang);
    printf("Hasil akhir adalah %g", besaran(panjang, sudut));

    return 0;
}


float besaran(float panj, float sud)
{
    return(panj * tan(radian(sud)));
}

float radian(float sud)
{
    return(sud / 180 * PI);
}

