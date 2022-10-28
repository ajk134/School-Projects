#include <stdio.h>
#define COLS 3
#define ROWS 12
void Print2DArray(int array[][COLS]);
int PrintRowAverage(int array[][COLS], int whichrow);
int PrintColAverage(int array[][COLS], int whichcol);

int main(void)
{
    int grades[ROWS][COLS] = {{72,68,62},{95,88,95},{93,97,86},{98,77,98},{99,92,90},{47,32,27},{97,99,85},{85,95,91},{96,91,99},{94,90,85},{98,98,90},{76,82,98}};
    Print2DArray(grades);
    printf("%d\n", PrintRowAverage(grades, 2));
    printf("%d\n", PrintColAverage(grades, 1));
    return 0;
}
void Print2DArray(int array[][COLS])
{
    for(int i = 0; i<ROWS; i++)
    {
        int j = 0;
        printf("Row %d: ", i);
        printf("%d %d %d\n", array[i][j], array[i][j+1], array[i][j+2]);
        j++;
    }
}
int PrintRowAverage(int array[][COLS], int whichrow)
{
    int total =0;
    for(int i = 0; i<COLS; i++)
    {
        total += array[whichrow][i];
    }
    return total/COLS;
}
int PrintColAverage(int array[][COLS], int whichcol)
{
    int total = 0;
    for(int i = 0; i<ROWS; i++)
    {
        total += array[i][whichcol];
    }
    return total/ROWS;
}