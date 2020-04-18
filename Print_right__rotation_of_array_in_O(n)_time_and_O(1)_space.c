#include<stdio.h>
#include<conio.h>
void rightrotatearray(int arr[],int shiftamount,int len){
    int mod=shiftamount%len;
    if(mod==0){
        for(int j=0;j<len;j++){
            printf("%d",arr[j]);
        }
    }
    int rightshift=shiftamount;
    for(int i=0;i<len;i++){
        if(i<mod){
            printf("%d",arr[len-shiftamount]);
            shiftamount--;
        }

        else{

            printf("%d",arr[i-rightshift]);
        }

    }
}
int main()
{
    int array1[] = { 1, 3, 5, 7, 9 };
    int len = *(&array1 + 1) - array1;
    int shiftamount;
    printf("erherh%d",5%2);
    printf("enter the shifting amount");
    scanf("%d",&shiftamount);
    rightrotatearray(array1,shiftamount,len);
    return 0;
}
