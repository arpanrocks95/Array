#include<stdio.h>
#include<conio.h>
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
int main()
{
    int array1[]={1, 4 ,1};
    int len = *(&array1 + 1) - array1;
    int array2[]={1, 4 ,1};
    int rotationamount=1;
    int maxhammingdistance=0;

    for (int i =0;i<len-1;i++){
        int temphumdistance=0;
        arrayrotation(array2,rotationamount,len);
        for(int a=0;a<len;a++){
            if (array1[a]!=array2[a]){
                temphumdistance++;
            }
        }
        if(maxhammingdistance<temphumdistance){
            maxhammingdistance=temphumdistance;
        }


    }

    printf("maximum humming distance is %d",maxhammingdistance);
    return 0;
}
