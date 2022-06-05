#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   char str[10000];
   for(int i=0;i<n;i++)
   {
       scanf("%s",&str);
       int len=strlen(str);
       if(len>10)
       {
           printf("%c",str[0]);
        printf("%d",len-2);
           printf("%c\n",str[len-1]);
       }
       else
        printf("%s\n",str);
   }
   return 0;
}
