#include<stdio.h>
#include<conio.h>

int main()
{   int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int len=*(&arr+1)-arr;
    int count=0;

    for (int i = 0; i <len ; ++i) {
        if(arr[i]!=0){
            int temp=arr[count];
            arr[count]=arr[i];
            arr[i]=temp;
            count++;
        }
    }
    printf("\n");
    for (int j = 0; j <len ; ++j) {
        printf("%d",arr[j]);
    }
    return 0;
}
