#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159
#define SDT 13

float radian(float);

int main()
{
    int i, j;
    float x[SDT], data[SDT][3];

    printf("------------------------------------------------\n");
    printf("| x     |   sin(x)   |   cos(x)   |   tan(x)   |\n");
    printf("------------------------------------------------\n");

    for(i=0; i<13; i++){
        x[i]=30*i;
    }

    for(i=0; i<13; i++){
        for(j=0; j<3; j++){
            if(j==0) data[i][j]=sin(radian(x[i]));
            else if(j==1) data[i][j]=cos(radian(x[i]));
            else data[i][j]=tan(radian(x[i]));
        }
    }

    for(i=0; i<13; i++){
            printf(" %-8g %-12.2f %-12.2f %-10.2f\n", x[i], data[i][0], data[i][1], data[i][2]);
    }

    return 0;
}


float radian(float a){

    return(a/180.0f * PI);

}
