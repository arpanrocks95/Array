#include<stdio.h>
#include<conio.h>
int maxindex(int arr[],int start,int end){
    int temp=-100;
    int index;
    for (int i = start; i <end ; ++i) {
        if(temp<arr[i]){
            temp=arr[i];
            index=i;
        }
    }
    return index;
}
int minindex(int arr[],int start,int end){
    int temp=100;
    int index;
    for (int i = start; i <end ; ++i) {
        if(temp>arr[i]){
            temp=arr[i];
            index=i;
        }
    }
    return index;
}
int main()
{   int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9} ;
    int len=*(&arr+1)-arr;
    int maxindexvar;
    int minindexvar;

    for (int i = 0; i <len/2+1 ; ++i) {
        maxindexvar=maxindex(arr,0+2*i,len);
        int temp=arr[0+2*i];
        arr[0+2*i]=arr[maxindexvar];
        arr[maxindexvar]=temp;
        for (int k = 0; k <len ; ++k) {
            printf("%d",arr[k]);
        }
        minindexvar=minindex(arr,1+2*i,len);
        temp=arr[1+2*i];
        arr[1+2*i]=arr[minindexvar];
        arr[minindexvar]=temp;

    }
    for (int k = 0; k <len ; ++k) {
            printf("%d",arr[k]);
    }



    return 0;
}
