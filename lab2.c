/*
* CMP_SC 1050
* FS 2022
* Lab 2
* By Alex Kochman (ajkz4h)
* September 2, 2022
*/
#include <stdio.h>

int main(void){
    //variable initialization
    int X, Y;
    //User input and program output
    printf("Please input two numbers: ");
    scanf("%d %d", &X , &Y);
    printf("X = %d, ", X);
    printf("Y = %d\n", Y);
    printf("X times Y = %d\n", X*Y);
    printf("X divided by Y = %d\n", X/Y);
    printf("X plus 1 quantity times Y = %d\n", (X+1)*Y);
    printf("X = %d, Y = %d\n", X, Y);
    printf("Remainder of X divided by Y = %d\n", X%Y);
    printf("Remainder of Y plus 1 quantity divided by X = %d\n", (Y+1)%X);


    return 0;
}