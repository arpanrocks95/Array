/*Given two integer arrays of same size, “arr[]” and “index[]”, reorder elements in “arr[]” according to given index array. It is not allowed to given array arr’s length.

Example:

Input:  arr[]   = [10, 11, 12];
        index[] = [1, 0, 2];
Output: arr[]   = [11, 10, 12]
        index[] = [0,  1,  2]

Input:  arr[]   = [50, 40, 70, 60, 90]
        index[] = [3,  0,  4,  1,  2]
Output: arr[]   = [40, 60, 90, 50, 70]
        index[] = [0,  1,  2,  3,   4] */
#include<stdio.h>
#include<conio.h>
int main()
{   int arr[] = {50, 40, 70, 60, 90 };
    int index[]={3,  0,  4,  1,  2};
    int len=*(&arr+1)-arr;
    int temp[len];
    for (int i = 0; i <len ; ++i) {
            temp[index[i]]=arr[i];
    }
    for (int j = 0; j <len ; ++j) {
        arr[j]=temp[j];
    }
    for (int k = 0; k <len ; ++k) {
        printf("%d ",arr[k]);
    }printf("\n");

    return 0;
}
