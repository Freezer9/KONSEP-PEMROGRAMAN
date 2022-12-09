#include<stdio.h>
#define MAKS 5

void rumus(void);

int nilai[][3] = {{81, 90, 62},{50, 83, 87},{89, 55, 65},{77, 70, 92}};
int kol, bar;
float data[MAKS][3], rata[4], avg;

int main()
{
    puts("---------------------");
    puts("| No.Mhs |   RATA   |");
    puts("---------------------");
    rumus();
    puts("---------------------");
}

void rumus(void)
{
    for(kol = 0; kol < 4; kol++){
        printf("|   %i    |", kol+1);
        for(bar = 0; bar < 3; bar++){
            rata[kol] += nilai[kol][bar];
            avg = rata[kol] / 3;
        }
        printf("   %4.2f  |\n", avg);
    }
}
