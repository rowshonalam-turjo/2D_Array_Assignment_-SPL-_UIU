#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int A[n][n];
    int m=(n/2);
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
                if((i==0&&j<m)||(i==n-1&&j>m)||(j==0&&i>m)||(j==n-1&&i<m)||(i==m&&j!=m)||(j==m))
                {
                    sum=sum+A[i][j];


                }
            }

        }

    }
    printf("Sum=%d",sum);

}
