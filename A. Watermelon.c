#include<stdio.h>
int main()
{int weight;
scanf("%d",&weight);
if(weight%2==0)
{
    if(weight<=2)
    {
        printf("YES");
    }
    else
        printf("NO");
}
else
    printf("NO");
}
