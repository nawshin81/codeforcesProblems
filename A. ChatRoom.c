#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,r;
    char s[100];
    scanf("%s",&s);
    int l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]=='h')
        {
            r=i;
            c++;
            break;
        }
    }
    for(i=r+1; i<l; i++)
    {
        if(s[i]=='e')
           {
            r=i;
            c++;
            break;
        }
    }
    for(i=r+1; i<l; i++)
    {
        if(s[i]=='l')
           {
            r=i;
            c++;
            break;
        }
    }
    for(i=r+1; i<l; i++)
    {
        if(s[i]=='l')
           {
            r=i;
            c++;
            break;
        }
    }
    for(i=r+1; i<l; i++)
    {
        if(s[i]=='o')
           {
            r=i;
            c++;
            break;
        }
    }
    //printf("%d",c);
    if(c==5)
        printf("YES");
    else
        printf("NO");
    return 0;

}
