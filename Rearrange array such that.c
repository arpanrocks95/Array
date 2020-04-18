/*Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i*/
#include<stdio.h>
#include<conio.h>
void sort(int arr[],int len){
    int a;
    for (int i = 0; i < len; ++i)
    {

        for (int j = i + 1; j < len; ++j)
        {

            if (arr[i] > arr[j])
            {

                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;

            }

        }

    }
}
int main()
{   int arr[] = {1, 2, 1, 4, 5, 6, 8, 8} ;
    int len=*(&arr+1)-arr;
    int arr2[len];
    sort(arr,len);
    for (int i = 0; i <len/2 ; ++i) {
        arr2[len-2-2*i]=arr[i];
        arr2[len-1-2*i]=arr[len-1-i];
    }
    for (int k = 0; k <len ; ++k) {
        printf("%d \n",arr2[k]);
    }
    return 0;
}
