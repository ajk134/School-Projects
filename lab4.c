#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i<300; i++)
    {
        int digit1 = i/100;
        int digit2 = i/10%10;
        int digit3 = i%10%10;
        //first digit
        switch (digit1)
        {
            case (2):
            printf(" two hundred");
            break;
            case (1):
            printf(" one hundred");
            break;
        }
        switch (digit2)
        {
            case (0):
            break;
            case (1):
                switch (digit3)
                {
                    case (0):
                    printf(" ten");
                    break;
                    case (1):
                printf(" eleven");
                break;
                case (2):
                printf(" twelve");
                break;
                case (3):
                printf(" thirteen");
                break;
                case (4):
                printf(" fourteen");
                break;
                case (5):
                printf(" fifteen");
                break;
                case (6):
                printf(" sixteen");
                break;
                case (7):
                printf(" seventeen");
                break;
                case (8):
                printf(" eighteen");
                break;
                case (9):
                printf(" nineteen");
                break;
                }
            break;
            case (2):
            printf(" twenty");
            break;
            case (3):
            printf(" thirty");
            break;
            case (4):
            printf(" fourty");
            break;
            case (5):
            printf(" fifty");
            break;
            case (6):
            printf(" sixty");
            break;
            case (7):
            printf(" seventy");
            break;
            case (8):
            printf(" eighty");
            break;
            case (9):
            printf(" ninety");
            break;
        }
        if(i<11)
        {
        switch (digit3)
        {
            case (1):
            printf("one");
            break;
            case (2):
            printf(" two");
            break;
            case (3):
            printf(" three");
            break;
            case (4):
            printf(" four");
            break;
            case (5):
            printf(" five");
            break;
            case (6):
            printf(" six");
            break;
            case (7):
            printf(" seven");
            break;
            case (8):
            printf(" eight");
            break;
            case (9):
            printf(" nine");
            break;
            case (10):
            printf(" ten");
            break;
        }
        }
        else
        {
            if (digit2 != 1){
            switch (digit3)
        {
            
            case (1):
            printf(" one");
            break;
            case (2):
            printf(" two");
            break;
            case (3):
            printf(" three");
            break;
            case (4):
            printf(" four");
            break;
            case (5):
            printf(" five");
            break;
            case (6):
            printf(" six");
            break;
            case (7):
            printf(" seven");
            break;
            case (8):
            printf(" eight");
            break;
            case (9):
            printf(" nine");
            break;
            case (10):
            printf(" ten");
            break;
        }
            }
    }
    if(i != 299)
    printf(",");
    }
    return 0;

}