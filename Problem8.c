#include<stdio.h>
int main()
{
    int x,y,high=0,lor=0,loc=0;
    scanf("%d %d",&x,&y);
    int A[x][y];
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
            if(A[i][j]>high){
                high=A[i][j];
                lor=i;
                loc=j;
            }
        }
    }
    printf("Max: %d",high);
    printf("\nLocation: [%d][%d]",lor,loc);

}
