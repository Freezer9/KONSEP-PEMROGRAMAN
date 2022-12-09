#include<stdio.h>

int main()
{
    int beli, tiket, total, sisa;

    puts("Beli Tiker Pertandingan MU vs Brentford\n");
    printf("Berapa tiket yang ingin dibeli:\n");
    scanf("%i", &beli);

    tiket = beli / 3 * 100000;
    sisa = beli % 3 * 50000;
    total = sisa + tiket;
    printf("Jumlah tiket yang harus dibayar:\nRp.%i", total);

        return 0;
}
