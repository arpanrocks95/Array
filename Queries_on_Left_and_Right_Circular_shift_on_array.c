#include<stdio.h>
#include<conio.h>
void arrayrotationright(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
    {
        int temp=arr[n-1];
        for (int j=0;j<n-1;j++)
        {   arr[n-1-j]=arr[n-2-j];}
        arr[0]=temp;
    }
}
void arrayrotationleft(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for (int j=0;j<n-1;j++)
        {   arr[j]=arr[j+1];}
        arr[n-1]=temp;
    }
}

void querysolver(int qarr[],int arr[],int lenofarray,int querylen[]){


    if (querylen==2){
        if(qarr[0]==1){
            arrayrotationright(arr,qarr[1],lenofarray);
        }
        else{
            arrayrotationleft(arr,qarr[1],lenofarray);
        }
    }
    else{
        int sum=0;
        int exitlen;
        if(qarr[1]==0){
            exitlen=qarr[2];
        }
        else{
            exitlen=qarr[1]+qarr[2]-qarr[1]+1;
        }
        for (int i = qarr[1]; i <=exitlen; ++i) {

            sum=sum+arr[i];
        }
        printf("%d is the sum of query \n",sum);

    }
}
int main()
{
    int array1[]={ 1, 2, 3, 4, 5 };
    int query1[] = { 1, 3 };
    int query2[] = { 3, 0, 2 };
    int query3[] = { 2, 1 };
    int query4[] = { 3, 1, 4 };
    int arrlen = *(&array1 + 1) - array1;

    querysolver(query1,array1,arrlen,*(&query1+1)-query1);

    querysolver(query2,array1,arrlen,*(&query2+1)-query2);

    querysolver(query3,array1,arrlen,*(&query3+1)-query3);

    querysolver(query3,array1,arrlen,*(&query4+1)-query4);


    return 0;
}
