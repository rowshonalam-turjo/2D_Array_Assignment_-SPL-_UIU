#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int A[m][n];
    int B[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
             B[i][j]=A[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int count=0;
            for(int k=0; k<m; k++)
            {
                for(int a=0; a<n; a++)
                {
                    if(A[i][j]==B[k][a])
                    {
                        count++;
                        if(count>=2)
                    {
                        B[k][a]=-1;
                    }
                    }
                }
            }
        }
    }
    for(int k=0; k<m; k++)
    {
        for(int a=0; a<n; a++)
        {
            printf("%d\t",B[k][a]);

        }
        printf("\n");
    }

}

