#include<stdio.h>             //Print difference b/w odd indexed and even indexed elements
int main()
{
    int arr[5]={1,2,3,4,5};
    int Evensum = 0;
    int Oddsum = 0;
    for(int i=0 ; i<=4 ; i++)
    {
        if(i%2==0)
        {
            Evensum = Evensum + arr[i];
        }
        if(i%2!=0)
        {
            Oddsum = Oddsum + arr[i];
        }
    }
    int Diff = Oddsum - Evensum ;
    printf("%d",Diff);
}