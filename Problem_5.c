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
            if(i==j)
            {
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
