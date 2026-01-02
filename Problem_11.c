#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int A[n][n];

    if(n%2!=0)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i%2!=0||j%2!=0)
                {
                    sum+=A[i][j];
                }
            }
        }
        printf("Sum=%d ",sum);

    }

}
