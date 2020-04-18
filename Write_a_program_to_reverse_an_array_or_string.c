#include<stdio.h>
#include<conio.h>

int main()
{   int arr[] = {4, 5, 1, 2};
    int len=*(&arr+1)-arr;
    int start=0;
    int end=len-1;

    while (start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        --end;
    }
    for (int i = 0; i < len; ++i) {
        printf("%d",arr[i]);
    }
    return 0;
}

