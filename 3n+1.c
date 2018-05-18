#include<stdio.h>
int main()
{
int a,b,i,swap,j,ans,sum;

while(scanf("%d%d",&a,&b)==2 && a>0 && b>0)
{
    sum=0;
    printf("%d %d ",a,b);
    if(a>b)
    {swap=b;
    b=a;
    a=swap;}
    for(i=a;i<=b;i++)
        {
        ans=1;
        for(j=i;j!=1;j=j)
        {
            if(j%2==0)
            j=j/2;
            else
            j=3*j+1;
            ans=ans+1;
        }
    if(ans>=sum)
    sum=ans;
    }
printf("%d\n",sum);
}
return 0;
}
