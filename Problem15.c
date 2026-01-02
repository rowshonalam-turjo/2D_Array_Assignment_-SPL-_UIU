#include<stdio.h>
int main()
{
    int m,n,sum=0;
    scanf("%d%d",&m,&n);
    int A[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           sum+=A[i][j];
        }
    }
    printf("Sum=%d",sum);


}
