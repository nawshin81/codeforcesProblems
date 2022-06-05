#include<stdio.h>
int main()
{
    int x,step=0;
    scanf("%d",&x);
    step=x%5;
    //printf("%d\n",step);
    if(step==0)
        printf("%d",x/5);
    else if(step!=0)
        printf("%d",(x/5)+1);
    return 0;
}
