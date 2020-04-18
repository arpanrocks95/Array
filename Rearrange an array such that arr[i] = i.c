#include<stdio.h>
#include<conio.h>

int search(int arr[],int i,int end)
{   int temp=0;
    for (int j = i; j < end; ++j) {
        if(arr[j]==i){
            temp=j;
        }

    }
    if (arr[temp]==temp){
        return 100;
    }
    if(temp!=0){
        return temp;
    }
    else{
        return -1;
    }

}
int searchneg1(int arr[],int i ,int end){
    int temp1;
    for (int j = 0; j <end ; ++j) {
        if(arr[j]==-1){
            temp1=j;

        }
    }

    return temp1;
}
int main()
{   int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int len=*(&arr+1)-arr;
    int temp;

    for (int j = 0; j <len ; ++j) {
        int result =search(arr,j,len);
        if (result!=-1){
            if(result !=100){
                int temp=arr[j];
                arr[j]=arr[result];
                arr[result]=temp;
            }

        }
        if (result == -1){
            if(arr[j]!=-1){
                int resultneg =searchneg1(arr,j,len);
                int tempn=arr[j];
                arr[j]=arr[resultneg];
                arr[resultneg]=tempn;
            }
        }
    }



    for (int l = 0; l <len ; ++l) {
        printf("%d",arr[l]);

    }

    return 0;
}
