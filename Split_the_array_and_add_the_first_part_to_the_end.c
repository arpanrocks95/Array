#include<stdio.h>
#include<conio.h>

int main()
{   int arr[ ] = {12, 10, 5, 6, 52, 36};
    int k;
    printf("enter the amount of aplit index ");
    scanf("%d",&k);

    int len=*(&arr+1)-arr;
    int temp[k];
    for (int i = 0; i <len+k ; ++i) {
        if(i<k){
            temp[i]=arr[i];
        }
        else if (i<len){
            arr[i-k]=arr[i];
        }
        else{
            arr[i-k]=temp[i%len];
        }
    }
    for (int i = 0; i <6 ; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
