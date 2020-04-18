
#include<stdio.h>

void arrayrotationby1(int arr[],int d,int n)
{

        int temp=arr[n-1];
        for (int j=0;j<n-1;j++)
        {   arr[n-1-j]=arr[n-2-j];}
        arr[0]=temp;

}
void main()
{
    int arr1[]={1,2,3,4,5};
    arrayrotationby1(arr1,2,5);
    for (int i=0;i<5;i++){
         printf("%d",arr1[i]);
    }
}
