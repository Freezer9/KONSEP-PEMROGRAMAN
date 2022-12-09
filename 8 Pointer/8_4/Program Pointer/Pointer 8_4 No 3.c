#include <stdio.h>
char strA[80] = "Pointer itu mudah";
char strB[80];

    main(){
    char *pA, *pB;
    puts(strA);
    pA = strA;
    puts(pA);
    pB = strB;
    putchar('\n');
    while(*pA != '\0')
    {
    *pB++ = *pA++;
    }
    *pB = '\0';
    puts(strB);
}
