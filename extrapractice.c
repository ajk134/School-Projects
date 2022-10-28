#include <stdio.h>
int myPow(int x, int y);
int main(void)
{

    printf("%d\n", myPow(3, 3));

    return 0;
}
int myPow(int x, int y)
{
    int total = x;
for (int i = 1; i<y; i++)
{
    total *= x;
}
return total;
}