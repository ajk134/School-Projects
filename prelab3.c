#include <stdio.h>

int main(void){

    int i = 1;
    

    while (i < 51){
        if (i%3==0){
            if (i%5==0){
                printf("Fizz Buzz");
            }
            else{
                printf("Fizz");
            }
        }
        
        else{
            if (i%5==0){
                printf("Buzz");
            }
            else{
                printf("%d", i);
            }
        }
    

        
        if(i<50){
        printf(", "); 
        }
        i++;
    }

        return 0;
    }
 