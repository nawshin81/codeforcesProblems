#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100];
    int c=0;
    scanf("%s",&s);
    scanf("%s",&t);
    int sl=strlen(s);
    int tl=strlen(t);
for(int i=0;i<sl;i++)
{
    if(s[i]==t[tl-1-i])
        c++;
}
if(c==sl)
    printf("YES");
else
    printf("NO");
return 0;
}
