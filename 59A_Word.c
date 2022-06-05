#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int cl=0,cu=0;
    scanf("%s",&s);
    int l=strlen(s);
for(int i=0;i<l;i++)
{
    if(s[i]>=65&&s[i]<=90)
        cu++;
    else if(s[i]>=97&&s[i]<=122)
        cl++;
}
if(cl>=cu)
{
    for(int i=0;i<l;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        s[i]=s[i]+32;
    }
        printf("%s",s);

}
else if(cl<cu)
{
    for(int i=0;i<l;i++)
    {
        if(s[i]>=97&&s[i]<=122)
        s[i]=s[i]-32;
    }
        printf("%s",s);

}
return 0;
}
