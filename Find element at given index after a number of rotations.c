#include<stdio.h>
#include<conio.h>


int findelement(int arr[],int ranges [][2],int rotations,int index){
    int temp=0;
    int j =0;
    for (int i = 0; i <rotations ; ++i) {
        temp=arr[*(*(ranges+i)+j)];
        arr[*(*(ranges+i)+j)]=arr[*(*(ranges+i)+j+1)];
        arr[*(*(ranges+i)+j+1)]=temp;
    }
    return arr[index];

}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int rotations = 2;
    int ranges[][2] = { { 0, 2 }, { 0, 3 } };
    int index = 1;
    printf("%d",findelement(arr,ranges,rotations,index));
    return 0;
}
