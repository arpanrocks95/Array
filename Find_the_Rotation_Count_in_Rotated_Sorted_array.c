#include <stdio.h>


int main() {
    //variables
    int rotationamount=0;
    int array1[5];


    //assignments and allocation
    int len = *(&array1 + 1) - array1;

    //recieving inputs in the array
    printf("enter the %d element in the sorted order \n ",len);
    for (int i = 0; i < len; i++) {
        printf(" enter your %d element \n ", i + 1);
        scanf("%d", &array1[i]);
    }

    for(int i=0;i<len;i++){

        rotationamount++;
        if (rotationamount==len){
            rotationamount=0;
        }
        if (array1[i]>array1[i+1]){
            break;
        }

    }

    printf(" rotation amount  is %d",rotationamount);
    return 0;
}
