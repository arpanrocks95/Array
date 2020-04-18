#include<stdio.h>
void main()
{
    int array[12]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n=12;
    int d=3;
    int gcd;

    //calculating gcd

    if (d==0){
        gcd =  n;
    }
    else if (n>d)
    {
        for (int i=1;i<=d;i++){
            if((d%i==0) && (n%i==0))
            {
                gcd=i;
            }
        }
    }
 //   printf("gcd is %d",gcd);

    //rotate array by n

    for(int i=0;i<gcd;i++)
    {
        int temp=array[i];
        int start=i;
        int end =0;
        int count=0;

        while(1)
        {
            end=start+gcd;
            if (count >gcd){

                break;
            }
            array[start]=array[end];
            start=end;
            count++;

        }

    }
    array[n-d]=1;
    for(int i=0;i<n;i++)
    {
        printf("%d element of array %d \n",i,array[i]);
    }

}

