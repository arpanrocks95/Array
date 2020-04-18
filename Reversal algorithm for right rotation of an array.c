
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
int main()
{
    int array1[]={1, 2, 3, 4, 6, 5, 7, 8, 9, 10};
    int len = *(&array1 + 1) - array1;
    int rotationamount;
    printf("enter the rotation amount ");
    scanf("%d",&rotationamount);
    arrayrotation(array1,rotationamount,len);
    for (int i=0;i<len;i++){
        printf("%d",array1[i]);
    }return 0;
}
