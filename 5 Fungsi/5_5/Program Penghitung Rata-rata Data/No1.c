#include<stdio.h>
#include<stdlib.h>
float masukan(int);
float average(float, int);

main()
{
    int i, n;
    float hasil, rata;
    puts("==== Program Penghitung Rata-rata Data ====");
    printf("Masukkan Berapa Data: ");
    scanf("%i", &n);
    hasil = masukan(n);
    rata = average(hasil, n);
    //
    printf("\nTotal nilai data: %g\n", hasil);
    printf("Hasil rata-rata: %g\n", rata);

    return 0;
}

float masukan(int data)
{
    int i;
    float nilai[data], total = 0;

    for(i = 1; i <= data; i++){
        printf("Masukkan data ke %d: ", i);
        scanf("%g", &nilai[i]);
        total += nilai[i];
        }
        printf("Data yang anda masukkan: ");
        printf("%g", nilai[1]);
        for(i = 2; i<= data; i++)
            printf(", %g", nilai[i]);

        return total;
}

float average(float masuk, int jmlh)
{
    return(masuk / jmlh);
}


