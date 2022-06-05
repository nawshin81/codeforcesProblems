#include<stdio.h>
int main()
{
    int n,value[100];
    int even=0,odd=0,p,q;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&value[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(value[i]%2==0)
        {
            even++;
            p=i;
        }
        else
        {
            odd++;
            q=i;
        }
    }
    if(even>odd)
    {
        printf("%d",q+1);
    }
    else
    {
        printf("%d",p+1);
    }
}
