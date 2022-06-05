/*gives runtime error
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int q=n/10;
    int r=n%10;
    //printf("%d",r);
    while(q!=0)
    {
        if(r==4||r==7)
        {
            q=q/10;
            r=q%10;
        }
        else
        {
            printf("NO");
            return;
        }
    }
printf("YES");
}*/
/*still runtime error
#include<stdio.h>
//#include<string.h>
int main()
{
char s[100];
scanf("%s",&s);
//int len=strlen(s);
int c=0;
for(int i=0;i<strlen(s);i++)
{
    if(s[i]=='4'||s[i]=='7')
    {
        c++;
    }
    else
    {
        printf("NO");
        return;
    }
}
if(c==strlen(s))
    printf("YES");
if(c==4||c==7)
    printf("YES");
else
    printf("NO");
return 0;
}
}*/
#include<stdio.h>
#include<string.h>
int main()
{

    char s[20];
    char a[20];
    int cn=0;

    gets(s);
    int ln;
    ln = strlen(s);
    int i;

    for ( i=0; i<ln; i++)
        if( s[i]=='4' || s[i]=='7')
            cn++;

    if ( cn==4 || cn==7)
        printf("YES\n");
    else
        printf("NO\n");

}
