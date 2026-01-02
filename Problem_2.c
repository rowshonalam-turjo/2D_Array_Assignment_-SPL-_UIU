#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int A[x][y];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Row-wise: ");
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            printf("%d ",A[i][j]);
        }
    }
    printf("\nColumn-wise: ");
     for(int i=0; i<y; i++)
    {
        for(int j=0; j<x; j++)
        {
            printf("%d ",A[j][i]);
        }
    }
}
