#include<stdio.h>
int main()
{
    int a,i,j,n,k=-1,p,s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {scanf("%d",&n);
          for(j=1;j<=n;j++){
            scanf("%d",&p);
            if(p>k)
                {k=p;
                s=j;}
          }
          printf("case %d:%d",i,s);

    }
    return 0;

}
