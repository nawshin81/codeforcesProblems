#include<stdio.h>
#include<math.h>
int main()
{
    double a,n,m;
    double x,y,result,r,c;
    scanf("%lf %lf %lf",&n,&m,&a);
    c=(n/a);
    r=(m/a);
    x=ceil(c);
    y=ceil(r);
    result=x*y;
    printf("\n%.0lf",result);
    return 0;
}