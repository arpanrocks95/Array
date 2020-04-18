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


int main() {
    //variables
    int rotationamount;
    int array1[5];
    int find;
    //assignments and allocation
    int len = *(&array1 + 1) - array1;
    printf("enter the rotation amount");
    scanf("%d", &rotationamount);


    //recieving inputs in the array
    printf("enter the %d element in the sorted order \n ",len);
    for (int i = 0; i < 5; i++) {
        printf(" enter your %d element \n ", i + 1);
        scanf("%d", &array1[i]);
    }

    //recieving the finding element
    printf("enter the sum to be found  ");
    scanf("%d", &find);


    //rotating elements in the array
    arrayrotation(array1, rotationamount, len);

    //finding the sum of pair
    int l=0;
    int r=len-1;
    int pivot ;
    int result=-1;
    for(int i;i<len;i++){
        if (array1[i]>array1[i+1])
        {
            pivot =i;
            break;
        }
    }

    if (array1[l]+array1[l+1]<find)
    {
        r=pivot;
    }
    else {
        l=pivot+1;
    }
    for (int i = 0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(find == array1[i] + array1[j])
            {
                result = 1;
            }

        }
    }

    printf("%d",result);
    if (result == 1) {
        printf("two elements with sum %d found",find);
    } else {
        printf("not found");
    }

    return 0;
}
