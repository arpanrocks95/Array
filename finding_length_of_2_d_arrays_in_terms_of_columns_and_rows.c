#include<stdio.h>
#include<conio.h>

int main()
{
    int ranges1[][2] = { { 0, 2 }, { 0, 3 },{0,4} };
    printf("no of rows %d \n",*(&ranges1+1)-ranges1);
    printf("no of columns %d \n",*((&*ranges1)+1) - *ranges1);
    /*
    int rows = sizeof array / sizeof array[0];
 int cols = sizeof array[0] / sizeof array[0][0];*/
    return 0;
}
