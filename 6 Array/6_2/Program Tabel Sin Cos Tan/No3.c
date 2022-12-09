#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAKS 20
#define PI 3.14159

void hasil(void);
float radian(float);
float cek(float);

int x[] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};
int kol, bar;
float data[MAKS][3];

int main()
{
    puts("---------------------------------------------------------");
    puts("|    X    |    Sin(x)   |     Cos(x)    |     Tan(x)    |");
    puts("---------------------------------------------------------");
    hasil();
    puts("---------------------------------------------------------");
    puts("KET: Tan 90 = infinity, Tan 270 = infinity  ");

}

float radian(float drjt)
{
    return (drjt / 180.0f * PI);
}

float cek(float bil)
{
    if(bil > -0.01f && bil < 0.00f){
        return 0.0f;
    }
    else if(bil > 2){
        return INFINITY;
    }
    else{
        return bil;
    }
}

void hasil(void)
{
    for(kol = 0; kol < MAKS; kol++){
        data[kol][0] = cek(sin(radian(x[kol])));
        data[kol][1] = cek(cos(radian(x[kol])));
        data[kol][2] = cek(tan(radian(x[kol])));
    }

    for(kol = 0; kol < 13; kol++){
        printf("|  %3i    |", x[kol]);
        for(bar = 0; bar < 3; bar++){
            printf("    %3.2f \t|  ", data[kol][bar]);
        }
        printf("\n");
    }
}
