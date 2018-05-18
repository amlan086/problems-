#include<stdio.h>
 #include<math.h>
 #define PI acos(-1)
 int main()
 {
     int n,i;
     double ca,ch,r,ra,length,wide;
     scanf("%d",&n);
     for(i=1; i<=n; i++)
     {
         scanf("%lf",&length);
         wide=((6*length)/10);
         r=((2*length)/10);
         ca=(PI*r*r);
         ch=(length*wide);
         ra=(ch-ca);
         printf("%.2lf %.2lf\n",ca,ra);
     }

     return 0;


 }

