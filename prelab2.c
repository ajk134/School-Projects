#include <stdio.h>
int main(void)
{
    printf("Enter 4 integers (A,B,C,D) separated by spaces: \n");
    int str1, str2, str3, str4;

    scanf("%d %d %d %d", &str1 &str2 &str3 &str4);
    printf("*** Initial Values ***\n");
    printf("A=%d\n", str1);
    printf("B=%d\n", str2);
    printf("C=%d\n", str3);
    printf("D=%d\n", str4);
    printf("Calculated values\n");
    printf("The sum of B and C = %d\n", str2 + str3);
    printf("The product of A and D = %d\n", str1*str4);
    printf("The integer quotient of A divided by C = %d\n", str1/str3);
    printf("The integer remainder of C divided by D = %d\n", str3%str4);
    printf("The product of A and C divided by the quantity sum of B and D = %d\n", (str1*str3)/(str2+str4));


    return 0;
}