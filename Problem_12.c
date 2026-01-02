#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int A[m][n];
     for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        int B[m][n];
          for(int i=0; i<n; i++)
        {
            for(int j=n-1,k=0; j>=0,k<n; j--,k++)
            {
               B[i][k]=A[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int k=0; k<n; k++)
            {
               printf("%d ",B[i][k]);
            }
            printf("\n");
        }


}
