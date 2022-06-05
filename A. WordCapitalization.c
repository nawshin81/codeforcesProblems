#include<stdio.h>
#include<stdlib.h>
int main()
{
    char w[1000];
    scanf("%s",&w);
    int len=strlen(w);
    //puts(strupr(w[0]));
    for(int i=0; i<len; i++)
    {
        if(w[0]>=97&&w[0]<=122)
            w[0]=w[0]-32;
    }
    printf("%s\n",w);
    return 0;
}
