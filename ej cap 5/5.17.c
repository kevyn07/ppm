#include <stdio.h>

/* Apuntadores y arreglos */
int main(void) // 'void' replaced with 'int' to return an integer value
{
    int V1[4] = {1, 3, 5, 7}, V2[4]= {2,4,6,8}; // V2 initialized with all elements
    int *AX, *AY;
    AX = &V1[2];
    AY = &V2[2];
    V2[2] = *(AX+1);
    V2[3] = *AX;
    AX = AX + 1;
    V1[0] = *AX;
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \t V2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d", V1[0],V1[1],V1[2],V1[3],V2[0],V2[1],V2[2],V2[3]); // ',' added between format specifiers
    V1[2] = *AY;
    V1[1] = --*AY;
    AX = AX + 1;
    V1[3] = *AX;
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \t V2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d", V1[0],V1[1],V1[2],V1[3],V2[0],V2[1],V2[2],V2[3]); // ',' added between format specifiers
    return 0; // main function should return an integer value
}
