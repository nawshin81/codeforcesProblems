#include<stdio.h>
int main()
{
    int n,table[100][100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            table[i][0]=1;
            table[0][j]=1;
            //table[i][j]=table[i-1][j]+table[i][j-1];
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            table[i][j]=table[i-1][j]+table[i][j-1];
        }
    }
    printf("%d",table[n-1][n-1]);
}
