#include<stdio.h>
#include<conio.h>
void arrayrotation(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
    {
        int temp=arr[n-1];
        for (int j=0;j<n-1;j++)
        {   arr[n-1-j]=arr[n-2-j];}
        arr[0]=temp;
    }
}
void main()
{
    int arr1[]={5, 6, 7, 8, 9, 10, 1, 2, 3};
    arrayrotation(arr1,2,9);
    for (int i=0;i<9;i++){
         printf("%d",arr1[i]);
    }
}
