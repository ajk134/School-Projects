//Lab 6, CS1050, Semester 1, Alex Kochman, 10/7/2022
#include <stdio.h>

int main(void)
{
    //initialize even and odd array, plus the second increment variable for each array
    int j = 0;
    int k = 0;
    int arrayOdd[50];
    int arrayEven[50];
    int total1 = 0, total2 = 0;
    double average1, average2;
    //increment for the odd array and print each index
    printf("\nArray1 elements:\n");
    for(int i = 0; i<=99; i+=2)
    {
        arrayOdd[j]=i+1;
        printf("array1[%d] = %d, ", j, arrayOdd[j]);
        //calculate total of array1 odd elements
        if(j%2!=0)
        total1 += arrayOdd[j];
        //calculate total of array1 even elements
        if(j%2==0)
        total2 += arrayOdd[j];
        j++;
    }
    //calculate average1
    average1 = (double) total1/25;
    printf("\nArray2 elements:\n");
    //increment for the even array and print each index
    for(int i = 0; i<=99; i+=2)
    {
        arrayEven[k]=i;
        printf("array2[%d] = %d, ", k, arrayEven[k]);
        k++;
    }
    //calculate average2
    average2 = (double) total2/25;
    printf("\nTotal of array1 odd elements = %d, average = %.2f\n", total1, average1);
    printf("Total of array1 even elements = %d, average = %.2f\n", total2, average2);
    printf("Product of the two arrays:\n");
    //print products of each index for even and odd
    for(int i = 0; i<=49; i+=1)
    {
        printf("Product[%d]=%d, ", i, arrayOdd[i]*arrayEven[i]);
    }
    return 0;
}