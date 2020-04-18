#include<stdio.h>
#include<conio.h>
/*nput : arr[] = [5, 8, 1, 4, 2, 9, 3, 7, 6]
Output :arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5}

Input : arr[] = [1, 2, 3, 4]
Output :arr[] = {1, 4, 2, 3}*/
int largestindex(int arr[],int start,int end ){
    int index=start;
    for (int i = start+1; i < end ; ++i) {
        if(arr[index]<arr[i]){
            index=i;
        }
    }
    return index;
}
int smallestindex(int arr[],int start,int end ){
    int index=start;
    for (int i = start+1; i < end ; ++i) {
        if(arr[index]>arr[i]){
            index=i;
        }
    }
    return index;
}
int main()
{   int arr[] = {5, 8, 1, 4, 2, 9, 3, 7, 6};
    int len=*(&arr+1)-arr;

    for (int i = 0; i <len/2 ; ++i) {
        int smallestin=smallestindex(arr,i*2,len);
        int temp=arr[smallestin];
        arr[smallestin]=arr[i*2];
        arr[i*2]=temp;
        int largestin=largestindex(arr,1+(i*2),len);
        temp=arr[largestin];
        arr[largestin]=arr[1+(i*2)];
        arr[1+(i*2)]=temp;
    }
    printf("\n");
    for (int k = 0; k <len ; ++k) {
        printf("%d ",arr[k]);
    }
    return 0;
}
