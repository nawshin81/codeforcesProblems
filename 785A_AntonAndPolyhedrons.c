#include<stdio.h>
#include<string.h>
int main()
{
    char s[200000];
    int n,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%s",&s);
       if(s[0]=='T')
        c=c+4;
       else if(s[0]=='C')
        c=c+6;
       else if(s[0]=='O')
        c=c+8;
        else if(s[0]=='D')
        c=c+12;
        else if(s[0]=='I')
        c=c+20;
    }
       printf("%d",c);
}
