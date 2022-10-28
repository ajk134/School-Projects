#include <stdio.h>
int main(void)
{
//variable initialization
int input;
//user input (honors)
printf("Enter 1 to go from least to greatest or -1 to go from greatest to least.\n");
scanf("%d", &input);
//conditionals
if (input == -1)
{
    int i = 100;
    while (i>0)
    {
        if(i%3==0)
        {
            if (i%7==0)
            {
                printf("TS");
            }
            else
            {
                printf("T");
            }
        }
        else
        {
            if(i%7==0)
            {
                printf("S");
            }
        }
        printf("%d ", i);
        i-=2;
    }
    
}
if (input == 1)
{
    int i = 2;
    while (i<101)
    {
        if(i%3==0)
        {
            if (i%7==0)
            {
                printf("TS");
            }
            else
            {
                printf("T");
            }
        }
        else
        {
            if(i%7==0)
            {
                printf("S");
            }
        }
        printf("%d ", i);
        i+=2;
    }
    
}
    return 0;
}