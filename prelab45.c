#include <stdio.h>
#include <math.h>
int myPow(int input, int power);
int main(void)
{
printf("%d\n", myPow(100, 3));
return 0;
}

int myPow(int input, int power)
{
    if (power<0)
    {
        return -1;
    }
    if (power==0)
    {
        return 1;
    }
    else
    {
        return input*myPow(input,(power-1));
    }
}