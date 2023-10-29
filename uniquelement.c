//Find unique number, where all other elements are duplicate
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,3,2};

    

    for(int i = 0 ; i<=4 ; i++)
    {
         
        int count = 0;
        for(int j = 0 ; j<=4 ; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d",arr[i]);
        }
    }
}