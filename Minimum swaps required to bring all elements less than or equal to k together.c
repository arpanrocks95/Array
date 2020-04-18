#include<stdio.h>
#include<conio.h>

int main()
{   int arr[] = {2, 7, 9, 5, 8, 7, 4};
    int len=*(&arr+1)-arr;
    int count=0;
    int  k = 5;
    int countneg=0;
    for (int i = 0; i <len ; ++i) {
        if(arr[i]<=k){
            int before =arr[i];
            int temp=arr[count];
            arr[count]=arr[i];
            arr[i]=temp;
            int after=arr[i];
            if(after==before){
                countneg++;
            }
            count++;

        }
    }
    printf("%d",count-countneg);
    printf("\n");
    for (int j = 0; j <len ; ++j) {
        printf("%d",arr[j]);
    }
    return 0;
}
