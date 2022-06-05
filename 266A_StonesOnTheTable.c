#include<stdio.h>
int main()
{
    int n,c=0;
    char s[50];
    scanf("%d",&n);
    scanf("%s",&s);
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    printf("%d",c);
    return 0;
}
