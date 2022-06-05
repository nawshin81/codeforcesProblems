#include<stdio.h>
int main()
{
    int n,k,prob=0,passed_time=0,i=0;
    scanf("%d%d",&n,&k);
    int leftTime=240-k;
    while((leftTime-passed_time)>=(5*i)&&i<=n)
    {
        passed_time=passed_time+(5*i);
        if(passed_time>0)
        {
            prob++;
        }
        i++;
    }
    printf("%d",prob);
}
