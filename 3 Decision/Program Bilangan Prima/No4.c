#include<stdio.h>

int main()
{
    int bil1, angka, stat;

    printf("Masukkan Bilangan:");
    scanf("%d", &bil1);

    if(bil1 <= 1){
        printf("Masukkan angka lebih dari 1");
    }else{
        if(bil1 == 2){
            printf("%d merupakan bilangan prima.", bil1);
        }else{
        for(angka=2; angka<bil1; angka++){
            if(bil1 %angka == 0){
            stat = 0;
            break;
            }else{
            stat = 1;
            }
    }
    if(stat == 0){
        printf("%d merupakan bukan bilangan prima.\n", bil1);
    }else{
        printf("%d merupakan bilangan prima.", bil1);
        }
      }
    }
  }
