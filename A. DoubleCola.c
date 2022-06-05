#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    //s line[]=["Sheldon","Leonard","Penny","Rajesh","Howard"];
    while(i*5<n)
    {
        n-=i*5;
        i*=2;
    }
    n=n-1;
    n=n/i;
    if(n==0)
        printf("Sheldon");
    else if(n==1)
        printf("Leonard");
    else if(n==2)
        printf("Penny");
    else if(n==3)
        printf("Rajesh");
    else if(n==4)
        printf("Howard");
    //printf("%d",n);
    return 0;

}
