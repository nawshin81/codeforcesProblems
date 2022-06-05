#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5],r=0,c=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                r=i+1;
                c=j+1;
            }
        }
    }
    //printf("%d %d",r,c);
    int result=abs(r-3)+abs(c-3);
    printf("%d",result);
    return 0;
}

