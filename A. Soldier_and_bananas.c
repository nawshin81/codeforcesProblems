#include<stdio.h>
int main()
{
    int k,n,w,tot=0;
    scanf("%d",&k);
    scanf("%d",&n);
    scanf("%d",&w);
    for(int i=1;i<=w;i++)
    {
        tot=tot+(i*k);
    }
    //printf("%d",tot);
    if((tot-n)>0)
    {
        printf("%d",tot-n);
    }
    else
        printf("0");
}
