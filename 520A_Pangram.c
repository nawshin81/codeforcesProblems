#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],temp;
    int c=1,n;
    scanf("%d",&n);
    scanf("%s",&s);
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        s[i]=s[i]+32;
    }
    for (int i = 0; i < l-1; i++) {
        for (int j = i+1; j < l; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    //printf("%s",s);
    for(int i=0;i<l-1;i++)
    {
        if(s[i]!=s[i+1])
            c++;
    }
if(c==26)
    printf("YES");
else
    printf("NO");
//    printf("%d",c);
}
