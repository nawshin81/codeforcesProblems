#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int c=0;

    scanf("%s",&a);
    //printf("%s",a);
    int l=strlen(a);
    //printf("%d",l);
    for(int i=0;i<l-6; i++)
    {
        if(a[i]=='0'&&a[i+1]=='0'&&a[i+2]=='0'&&a[i+3]=='0'&&a[i+4]=='0'&&a[i+5]=='0'&&a[i+6]=='0')
            {c=7;
            break;
            //printf("%d",c);
            }
        else if(a[i]=='1'&&a[i+1]=='1'&&a[i+2]=='1'&&a[i+3]=='1'&&a[i+4]=='1'&&a[i+5]=='1'&&a[i+6]=='1')
            {//i=0;
              c=7;
            break;
            }
    }
    if(c==7)
        printf("YES");
    else
        printf("NO");
    return 0;
}
