#include <stdio.h>

void GetCount(int *outputInt)
{
printf("How many integers would you like to enter?\n");
scanf("%d", outputInt);
}
void GetIntegerArray(int * outputIntArray, int count)
{
    
    for(int i=0; i<count; i++)
    {
        printf("\nEnter integer #%d: ", i+1);
        scanf("%d", &outputIntArray[i]);
        printf("%d\n", outputIntArray[i]);
    }
    
}
void PrintArray(int a[], int size)
{
    for(int i = 0; i<size; i++)
    {
        printf("array[%d]=%d\n", i, a[i]);
    }
}

int main(void)
{
    printf("*******************\nWelcome to PreLab 8\n*******************\n\n");
    int length = 0;
    GetCount(&length);
    int array[length];
    GetIntegerArray(array, length);
    printf("You entered an array with %d elements:\n", length);
    PrintArray(array, length);
    return 0;
}