#include <stdio.h>

int main(void)
{
int arr[20];
int total;
double average;
for(int i = 0; i<20; i++)
{
    arr[i] = i+1;
}
for (int j = 0; j<20; j++)
{
    printf("Array[%d] = %d\n", j, arr[j]);
    total += arr[j];
}
printf("Total = %d\n", total);
average = (double)total/20;
printf("Average = %.2f\n", average);
    return 0;
}