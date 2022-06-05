#include<stdio.h>
#include<string.h>
int main()
{
    int n,a=0,d=0;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",&s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d)
        printf("Anton");
    else if(a<d)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}
