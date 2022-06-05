#include<stdio.h>
int main()
{
    int a,b,c,temp;
    //int w,x,y,z;
    int arr[6];
    scanf("%d%d%d",&a,&b,&c);
    arr[0]=a+b*c;
    arr[1]=a*(b+c);
    arr[2]=a*b*c;
    arr[3]=(a+b)*c;
    arr[4]=a+b+c;
    arr[5]=a*b*c;

    for(int i=0;i<6;++i)
    {
        for(int j=i+1;j<6;++j)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d",arr[5]);
}
