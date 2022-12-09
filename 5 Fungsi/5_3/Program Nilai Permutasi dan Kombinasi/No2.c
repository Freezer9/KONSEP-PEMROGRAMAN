#include<stdio.h>
#include<stdlib.h>
float faktorial(float);
float permutasi(float, float);
float kombinasi(float, float);

float main()
{
    int bil1, bil2;
    float perm, komb;

    puts("==== Program Penghitung Nilai Permutasi dan Kombinasi ====");
    printf("Masukkan Nilai Bilangan: ");
    scanf("%d %d", &bil1, &bil2);

    perm = permutasi(bil1, bil2);
    komb = kombinasi(bil1, bil2);

    printf("Hasil %d permutasi %d adalah %g\n", bil1, bil2, perm);
    printf("Hasil %d kombinasi %d adalah %g\n", bil1, bil2, komb);

    return 0;
}

float faktorial(float fkt)
{
    int hsl = 1, i;

    for(i = 1; i<= fkt; i++)
        hsl *= i;

    return(hsl);
}

float permutasi(float n, float r)
{
    float hslsperm, atas, bawah;

    atas = faktorial(n);
    bawah = faktorial(n - r);

    hslsperm = atas/bawah;

    return(hslsperm);
}

float kombinasi(float n, float r)
{
    float hslskomb, up, down, kali;

    kali = faktorial(r);
    up = faktorial(n);
    down = faktorial(n - r);

    hslskomb = up / (kali * down);

    return(hslskomb);
}
