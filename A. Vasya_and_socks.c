#include<stdio.h>
int main()
{
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    //int extra_days=(n+1)/m;
    for(int i=1;(m*i)<=(n+count);i++)
    {
        count++;
    }
    printf("%d",(n+count));
}
