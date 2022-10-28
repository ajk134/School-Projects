//Alexander Kochman, AJKZ4H, CS1050, LAB 5, Semester 1, September 30, 2022
#include <stdio.h>
#include <math.h>
//function prototype
int Summation(int m, int n);
int main(void)
{
    
//nested for loop to iterate over all cases    
for (int i = -5; i<=5; i++){
	for (int j = 1; j<=5; j++){
		
		printf("Summation of %d through %d squared = %d\n", i, j, Summation(i, j));
} 
}
    return 0;
}
//summation function
int Summation(int m, int n)
{

    int result=0;
//iteration
    for (int i = m; i<=n; i++)
    {	
	//squares i and stores in result variable
        result += pow(i, 2);
    }
    return result;
}
