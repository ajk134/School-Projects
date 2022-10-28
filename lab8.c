//Alexander Kochman, AJKZ4H, CS1050, Lab 8, October 21, 2022
#include <stdio.h>
//function prototypes
void GetIntArray(int * outputIntArray, int * count);
void GetCount(int *outputInt);
void PrintArray(int * array, int count);
int TotalArray(int * array, int count);
double AverageArray(int * array, int count);
int TotalBoth(int * array, int * array2, int count1, int count2);
double AverageBoth(int * array, int * array2, int count1, int count2);
//main (function calls, prints, variable initializations)
int main(void)
{
    printf("****************\nWelcome to Lab 8\n****************\n\n");
    //initializing lengths and arrays before using them in functions
    int length = 100;
    int length2 = 100;
    int array[length];
    int array2[length2];
    GetIntArray(array, &length);
    PrintArray(array, length);
    printf("Total: %d\n", TotalArray(array, length));
    printf("Average: %f\n", AverageArray(array, length));
    GetIntArray(array2, &length2);
    PrintArray(array2, length2);
    printf("Total 2: %d\n", TotalArray(array2, length2));
    printf("Average 2: %f\n", AverageArray(array2, length2));
    printf("Total of both: %d\n", TotalBoth(array, array2, length, length2));
    printf("Average of both: %f\n", AverageBoth(array, array2, length, length2));
    return 0;
}
//functions
void GetCount(int *outputInt)
{
    scanf("%d", outputInt);
}
void GetIntArray(int * outputIntArray, int * count)
{
    printf("Enter the number of elements in your array:\n");
    GetCount(count);
    for(int i=0; i<*count; i++)
    {
        printf("\nEnter element #%d: ", i+1);
        scanf("%d", &outputIntArray[i]);
        printf("%d\n", outputIntArray[i]);
    }
    
}
void PrintArray(int * array, int count)
{
    printf("\n\nHere are the %d elements of your array:\n", count);
    for(int i = 0; i<count; i++)
    {
        printf("\n\tElement %d = %d\n", i, array[i]);
    }
}
int TotalArray(int * array, int count)
{
    int total = 0;
    for(int i = 0; i<count; i++)
    {
        total += array[i];
    }
    return total;
}
double AverageArray(int * array, int count)
{
    int total = 0;
    for(int i = 0; i<count; i++)
    {
        total += array[i];
    }
    return (double)total/count;
}
int TotalBoth(int * array, int * array2, int count1, int count2)
{
    int total = 0;
    int total2 = 0;
    for(int i = 0; i<count1; i++)
    {
        total += array[i];
    }
    for(int j = 0; j<count2; j++)
    {
        total2 += array2[j];
    }
    return total+total2;
}
double AverageBoth(int * array, int * array2, int count1, int count2)
{
    int total = 0;
    int total2 = 0;
    for(int i = 0; i<count1; i++)
    {
        total += array[i];
    }
    for(int j = 0; j<count2; j++)
    {
        total2 += array2[j];
    }
    return (total + total2)/(count1+count2);
}