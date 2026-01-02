#include<stdio.h>
int main()
{
    int x,sum=0;
    scanf("%d",&x);
    int A[x][x];
    if(x%2!=0)
    {
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<x; j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
         for(int i=0; i<x; i++)
        {
            for(int j=0; j<x; j++)
            {
               if(i==0||i==x-1||i==j||(i+j==x-1&&i!=j))
               {
                   sum=sum+A[i][j];
               }
            }
        }
        printf("Sum= %d",sum);
    }


}
