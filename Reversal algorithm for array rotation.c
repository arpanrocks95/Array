
#include<stdio.h>
#include<conio.h>
void arrayrotation(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for (int j=0;j<n-1;j++)
        {   arr[0+j]=arr[0+j+1];}
        arr[n-1]=temp;
    }
}
void main()
{
    int arr1[]={1,2,3,4,5};
    arrayrotation(arr1,2,5);
    for (int i=0;i<5;i++){
         printf("%d",arr1[i]);
    }
}
