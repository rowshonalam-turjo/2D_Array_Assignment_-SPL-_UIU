#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int A[x][y];
    int B[x][y];
    int C[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
     for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
           C[i][j]=A[i][j]+B[i][j];
           printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}
