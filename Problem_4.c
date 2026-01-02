#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int A[x][x];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Major diagonal: ");
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
            }
        }
    }
    printf("\nMinor diagonal: ");
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(i+j==x-1)
            {
                printf("%d ",A[i][j]);
            }
        }
    }

}
