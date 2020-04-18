#include<stdio.h>
#include<conio.h>
/*earrange positive and negative numbers with constant extra space
Given an array of positive and negative numbers, arrange them such that all negative integers appear before all the positive integers in the array without using any additional data structure like hash table, arrays, etc. The order of appearance should be maintained.

Examples:

Input:  [12 11 -13 -5 6 -7 5 -3 -6]
Output: [-13 -5 -7 -3 -6 12 11 6 5]*/
int firstnegindex(int arr[],int start,int end ){
    for (int i = start; i <end ; ++i) {
        if (arr[i]<0){
            return i;
        }
    }
}
void arrange(int arr[],int start,int end ){
    int temp=arr[end];
    for (int i = end; i >start ; --i) {
        arr[i]=arr[i-1];
    }
    arr[start]=temp;
}
int main()
{   int arr[] = {12, 11, -13, -5, 6 ,-7, 5, -3 ,-6};
    int len=*(&arr+1)-arr;
    int negno=0;

    for (int i = 0; i <len ; ++i) {
        if(arr[i]<0){
            negno++;
        }
    }
    for (int j = 0; j <negno ; ++j) {
        int index=firstnegindex(arr,j,len);
        arrange(arr,j,index);
    }


    for (int i = 0; i < len; ++i) {
        printf("%d",arr[i]);
    }
    return 0;
}
