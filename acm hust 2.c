#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
           scanf("%d",&a);
     if (a>=80)
        printf("Case %d: A+\n",i);
        else if (a>=75)
        printf("Case %d: A\n",i);
        else if (a>=70)
        printf("Case %d: A-\n",i);
        else if (a>=65)
        printf("Case %d: B+\n",i);
        else if (a>=60)
        printf("Case %d: B\n",i);
        else if (a>=55)
        printf("Case %d: B-\n",i);
        else if (a>=50)
        printf("Case %d: C\n",i);
        else if (a>=45)
        printf("Case %d: D\n",i);
        else  printf("Case %d: F\n",i);
}
    return 0;
}
