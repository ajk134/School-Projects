//Alexander Kochman, AJKZ4H, CS1050, LAB 7
#include <stdio.h>
#define ROWS 12
#define COLS 3
void Print2DArray(int array[][COLS], int row);
void CheckGrade(int array[][COLS], int gradeArray[][COLS], int red);
int main(void)
{
    int grades[ROWS][COLS] = {{77,98,62},{92,63,85},{97,63,72},{66,77,45},{99,72,95},{83,36,99},{41,83,90},{77,90,88},{77,44,88},{60,98,77},{56,55,67},{77,77,60}};
    int curve[4][3] = {{85,90,90},{75,80,75},{60,70,55},{50,60,40}};
    printf("Here are the scores:\n");
    Print2DArray(grades, ROWS);
    printf("Here are the grade cutoffs:\n");
    Print2DArray(curve, 4);
    printf("Here are the grades:\n");
    CheckGrade(grades, curve, ROWS);
    return 0;
}
void Print2DArray(int array[][COLS], int row)
{
    for(int i = 0; i<row; i++)
    {
        int j = 0;
        printf("Row %d: ", i);
        printf("%d %d %d\n", array[i][j], array[i][j+1], array[i][j+2]);
        j++;
    }
}
void CheckGrade(int array[][COLS], int gradeArray[][COLS], int row)
{
    for(int i = 0;i<row; i++)
    {
        printf("Student %d: ", i);
        for(int j = 0; j<COLS; j++)
        {
            if(array[i][j]>gradeArray[i][j])
            printf("A ");
            else
            if(array[i][j]>gradeArray[i+1][j])
            printf("B ");
            else
            if(array[i][j]>gradeArray[i+2][j])
            printf("C ");
            else
            if(array[i][j]>gradeArray[i+3][j])
            printf("D ");
            else
            printf("F ");
            if(j==2)
            printf("\n");
        }
    }

}