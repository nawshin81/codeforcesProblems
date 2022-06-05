#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int flag=1;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+2;
            if(!flag)
            {
                printf(" ");
            }
        }
        else
        {
            flag=0;
            printf("%c",s[i]);
        }
    }
    return 0;
}
