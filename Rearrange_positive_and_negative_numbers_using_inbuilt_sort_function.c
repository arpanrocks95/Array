#include<stdio.h>
#include<conio.h>
int searchsmallerthanzero(int arr[],int start,int end ){
    for (int i = start; i <end ; ++i) {
        if(arr[i]<0){
            return i;
        }
    }
}
int searchzero(int arr[],int start,int end ){
    for (int i = start; i <end ; ++i) {
        if(arr[i]==0){
            return i;
        }
    }
}
void arrange(int arr[],int start,int end ){
    int temp=arr[end];
    for (int i = end; i >start ; --i) {
            arr[i]=arr[i-1];
    }
    arr[start]=temp;
}
int main()
{   int arr[] = {12, 11, -13, -5, 6, -7, 5, -3, -6};
/*Input :  arr[] = [12, 11, -13, -5, 6, -7, 5, -3, -6]
Output : arr[] = [-13, -5, -7, -3, -6, 12, 11, 6, 5]

Input :  arr[] = [-12, 11, 0, -5, 6, -7, 5, -3, -6]
Output : arr[] =  [-12, -5, -7, -3, -6, 0, 11, 6, 5]*/
    int len=*(&arr+1)-arr;
    int noofsmallerthan0=0;
    int noofzero=0;
    int starofzeroindex=0;
    for (int i = 0; i <len ; ++i) {
        if(arr[i]<0){
            noofsmallerthan0++;
        }
        if(arr[i]==0){
            noofzero++;
        }
    }

    for (int j = 0; j <noofsmallerthan0 ; ) {
        int index=searchsmallerthanzero(arr,j,len);
        arrange(arr,j,index);
        ++j;
        if(noofzero>0){
            starofzeroindex=j;
        }
    }
    if(noofzero>0){
        for (int i = starofzeroindex; i <starofzeroindex+noofzero ; ++i) {
            int index=searchzero(arr,i,len);
            arrange(arr,i,index);
        }
    }

    for (int k = 0; k <len ; ++k) {
        printf("%d ",arr[k]);
    }
    printf("\n");

    return 0;
}
