#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&
           str[i]!='U'&&str[i]!='Y'&&str[i]!='a'&&str[i]!='e'&&
           str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y')
        {
            if(str[i]<='Z')
                str[i]+=32;
            printf(".%c",str[i]);
        }
    }
}
