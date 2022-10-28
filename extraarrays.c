#include <stdio.h>
void initializeOne(int a[]);
void PrintArray(int a[]);
void initializeTwo(int a[]);
void multiplyArrays(int a1[], int a2[], int a3[]);
void printThreeArrays(int a1[], int a2[], int a3[]);
int main(void)
{
int array1[100], array2[100], array3[100];
initializeOne(array1);
PrintArray(array1);
initializeTwo(array2);
PrintArray(array2);
multiplyArrays(array1, array2, array3);
PrintArray(array3);
printThreeArrays(array1, array2, array3);

    return 0;
}
void initializeOne(int a[])
{
    int j = 1, i;
    for(i = 0; i<100; i++)
    {
        a[i] = j;
        j += 3;
    }
}
void PrintArray(int a[])
{
    int i;
    for(i = 0; i<100; i++)
    {
        printf("Array[%d] = %d\n", i, a[i]);
    }
}
void initializeTwo(int a[])
{
    int j = 2, i;
    for(i = 0; i<100; i++)
    {
        a[i]=j;
        j+=5;
    }
}
void multiplyArrays(int a1[], int a2[], int a3[])
{
    int i;
    for(i = 0; i<100; i++)
    {
        a3[i]=a1[i]*a2[i];
    }
}
void printThreeArrays(int a1[], int a2[], int a3[])
{
    int i;
    for(i = 0; i<100; i++)
    {
        printf("Array 1 Element %d = %d, Array 2 Element %d = %d, Array 3 Element %d = %d\n", i, a1[i], i, a2[i], i, a3[i]);
    }
}