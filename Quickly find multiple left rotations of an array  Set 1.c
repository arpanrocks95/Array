#include <stdio.h>


int main() {
    //variables
    int rotationamount;
    int array1[5];
    int realrotation;


    //assignments and allocation
    int len = *(&array1 + 1) - array1;


    //recieving inputs in the array
    printf("enter the %d element in the sorted order \n ",len);
    for (int i = 0; i < len; i++) {
        printf(" enter your %d element \n ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("enter the rotation count ");
    scanf("%d",&rotationamount);
    realrotation=rotationamount%len;

    if (len==realrotation){
        for(int i=0;i<len;i++){
            printf("%d",array1[i]);
        }
        return 0;
    }

    for(int i=0;i<realrotation;i++){
        int temp=array1[0];
        for(int j=0;j<len-1;j++){
            array1[j]=array1[j+1];
        }
        array1[len-1]=temp;
    }

    for(int i=0;i<len;i++){
        printf("%d",array1[i]);
    }
    return 0;
}
