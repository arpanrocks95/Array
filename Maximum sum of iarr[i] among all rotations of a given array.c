#include <stdio.h>

void arrayrotationby1(int arr[],int n)
{

    int temp=arr[n-1];
    for (int j=0;j<n-1;j++)
    {   arr[n-1-j]=arr[n-2-j];}
    arr[0]=temp;

}

int main() {
    //variables
    int rotationamount;
    int array1[3];
    int sum=0;

    //assignments and allocation
    int len = *(&array1 + 1) - array1;

    //recieving inputs in the array
    printf("enter the %d element in the sorted order \n ",len);
    for (int i = 0; i < len; i++) {
        printf(" enter your %d element \n ", i + 1);
        scanf("%d", &array1[i]);
    }
    int count=0;
    while(1) {
        count++;
        if (count > len) {
            break;
        }

        int tempsum = 0;

        for (int j = 0; j < len; j++) {
            tempsum = tempsum + j * array1[j];

        }
        if (tempsum > sum) {
            sum = tempsum;
        }
        arrayrotationby1(array1, len);

    }
    printf(" sum is %d",sum);
    return 0;
}