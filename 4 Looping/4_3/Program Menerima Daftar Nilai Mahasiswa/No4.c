#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, total=0, max=0, min=0, mean, nilai, temp=1;

    puts("Program Menerima Daftar Nilai Mahasiswa");
    printf("Masukkan Jumlah data yang akan dimasukkan: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%d", &nilai);
        if(max<nilai || max==0)
            max=nilai;

        if(min>nilai || min==0)
            min=nilai;

            total+=nilai;
    }
    printf("\n");
    printf("Hasil Akhir\n");
    mean = total/n;
    printf("Nilai minimal: %d\n", min);
    printf("Nilai maksimal: %d\n", max);
    printf("Nilai rata-rata: %d\n", mean);
    puts("Selesai");
    printf("\n");
}
