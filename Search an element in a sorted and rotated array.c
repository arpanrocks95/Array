#include <stdio.h>
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
int binarysearch(int arr[], int l, int r, int x)
{
    while (l<=r)
    {
        int mid = l + (r - l)/2;

        // If the element is present at the middle itself
        if (arr[mid] == x)  return 1;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x)  r=mid-1;

        // Else the element can only be present in right subarray
        l= mid+1;
    }

    // We reach here when element is not present in array
    return -1;
}

int main() {
    //variables
    int rotationamount;
    int array1[5];
    int result;
    int find;
    int l=0;
    int z=0;
    //assignments and allocation
    int len = *(&array1 + 1) - array1;
    printf("enter the rotation amount");
    scanf("%d", &rotationamount);
    int r=len-1;

    //recieving inputs in the array
    printf("enter the 10 element in the sorted order \n ");
    for (int i = 0; i < 5; i++) {
                printf(" enter your %d element \n ", i + 1);
                scanf("%d", &array1[i]);
            }

    //recieving the finding element
    printf("enter the finding element ");
    scanf("%d", &find);


    //rotating elements in the array
    arrayrotation(array1, rotationamount, len);

    //binary search in rotated array
    if (rotationamount>0){
        while (array1[z]<array1[z+1])
        {
            z++;
        }
    }

    if (array1[z]>find and array1[len-1]<find)
    {
        r=z;
    }
    else
    {
        l=z+1;
    }


    result = binarysearch(array1, l,r,find );
    if (result == 1) {
        printf("element found");
    } else {
        printf("not found");
    }

    return 0;
}
