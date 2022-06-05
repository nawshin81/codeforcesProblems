#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char str[100];
    //bool appears=false;
    int count=0;
    scanf("%s",&str);
    //printf(strlen(str));
    for(int i=0;i<strlen(str);i++)
    {
        bool appears=false;
        for(int j=0;j<i;j++)
        {
            if(str[j]==str[i])
            {
                appears=true;
                break;
            }
        }
        if(!appears)
        {
            count++;
        }
    }

//printf("%d",count);
if(count%2==0)
    printf("CHAT WITH HER!");
else if(count%2==1)
    printf("IGNORE HIM!");
}
