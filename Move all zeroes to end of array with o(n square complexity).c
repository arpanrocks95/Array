#include<stdio.h>
#include<conio.h>

int main()
{   int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int len=*(&arr+1)-arr;
    int start=0;
    for (int i = 0; i <len ; ++i) {
        if(arr[i]==0){
            start=i;
            for (int j = start; j < len ; ++j) {
                arr[j]=arr[j+1];
            }
            arr[len-1]=0;
        }
    }
    for (int j = 0; j <len ; ++j) {
        printf("%d",arr[j]);
    }
    return 0;
}
