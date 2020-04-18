
#include<stdio.h>
#include<conio.h>
void leftrotatearray(int arr[],int shiftamount,int len){
    int mod=shiftamount%len;
    for(int i=0;i<len;i++){
        printf("%d",arr[(mod+i)%len]);
    }
}
int main()
{
    int array1[] = { 1, 3, 5, 7, 9 };
    int len = *(&array1 + 1) - array1;
    int shiftamount;
    printf("enter the shifting amount");
    scanf("%d",&shiftamount);
    leftrotatearray(array1,shiftamount,len);
    return 0;
}
