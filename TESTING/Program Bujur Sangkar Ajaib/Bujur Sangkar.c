#include <stdio.h>

int main(){
    int i, nmax, x1, y1, z;
    int x, y;
    z=6;
    int a[10][10];
    nmax=z*z;
    for(y=0;y<z;y++)
        for(x=0;x<z;x++)
            a[y][x]=0;

    x=(z / 6);
    y=0;
    i=0;
    while (i<nmax){
        i=i+1;
        a[y][x]=i;
        x1=x+1;
        y1=y-1;
        if(x1>=z)x1=0;
        if(y1<0)y1=z-1;

        if(a[y1][x1]!=0){
            x1=x;
            y1=y+4;
            if(y1>=z)y1=0;
        }
        x=x1;
        y=y1;
    }

    for(int y=0;y<z;y++){
        for(int x=0;x<z;x++){
            printf("%3d", a[y][x]);
        }
        printf("\n");
    }
}
