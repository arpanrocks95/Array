#include<stdio.h>
#include<conio.h>
/*Input : A[] = {1, 2, 2, 1}
Output :  1 2 1 2
Explanation :
For 1st element, 1  1, i = 2 is even.
3rd element, 1  1, i = 4 is even.

Input : A[] = {1, 3, 2}
Output : 1 3 2
Explanation :
Here, the array is also sorted as per the conditions.
1  1 and 2 < 3.*/
int main()
{   int arr[] = {3, 1, 2};
    int len=*(&arr+1)-arr;
    for (int i = 0; i <len/2 ; ++i) {
        if(arr[(i*2)+1]<arr[i*2]){
            int temp=arr[(i*2)+1];
            arr[(i*2)+1]=arr[i*2];
            arr[i*2]=temp;
        }
    }
    printf("\n");
    for (int k = 0; k <len ; ++k) {
        printf("%d ",arr[k]);
    }
    return 0;
}
