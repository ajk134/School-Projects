#include <stdio.h>
#include <math.h>
double efunc( int i );
int main(void)
{
    int i;
    for(i = 1; i<=5;i++)
        {
            switch (i)
            {
            case (1):
            printf("e to the %d power = %.3lf\n", i, pow(efunc(i), 1));
            break;
            case (2):
            printf("e to the %d power = %.3lf\n", i, pow(efunc(i), 2));
            break;
            case (3):
            printf("e to the %d power = %.3lf\n", i, pow(efunc(i), 3));
            break;
            case (4):
            printf("e to the %d power = %.3lf\n", i, pow(efunc(i), 4));
            break;
            case (5):
            printf("e to the %d power = %.3lf\n", i, pow(efunc(i), 5));
            break;
            }
        }

    return 0;
}
long factorial(int n)
{
    int i;
    long result=1;
    for (i=n; i>1; i--)
    {
        result*=i;
    }
    printf("%ld ", result);
    return result;
}
double efunc(int j)
{
    double result=0;
    int l;
    for (l = 0; l<=10; l++)
    {
        double x = 1;
        x /= factorial(l);
        result += x;
    }
    return result;
}