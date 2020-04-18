#include<stdio.h>
#include<conio.h>
/*
  Given an array of integers of size n. Assume ‘0’ as invalid number and all other as valid number.
  Convert the array in such a way that if next number is a valid number and same as current number,
  double its value and replace the next number with 0.
  After the modification, rearrange the array such that all 0’s are shifted to the end.Input : arr[] = {2, 2, 0, 4, 0, 8}
Output : 4 4 8 0 0 0

Input : arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8}
Output :  4 2 12 8 0 0 0 0 0 0*/
void arrange(int arr[],int start ,int end ){
    int temp=arr[start];
    for (int i = start; i <end ; ++i) {
        arr[i]=arr[i+1];

    }
    arr[end-1]=temp;
}
int main()
{   int arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8};
    int len=*(&arr+1)-arr;
    for (int i = 0; i <len; i++) {
        int temp=0;
        while (arr[i]==0){

            arrange(arr,i,len);

            temp++;
            if(temp>len){
                break;
            }
        }
        if (arr[i]==arr[i+1]){
            arr[i]=arr[i]+arr[i+1];
            arr[i+1]=0;
        }
    }

    for (int k = 0; k <len ; ++k) {
        printf("%d ",arr[k]);
    }printf("\n");

    return 0;
}
