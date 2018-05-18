#include<bits/stdc++.h>
using namespace std;
int main()

{
 int n,m;
 scanf("%d %d",&n,&m);
 int t=m-n;
 int k,maxx=0,q=-1;

 for(int i=2;i<=m;i++)
 {
     k=t/i;
     if(k>maxx)
     {maxx=k;
     q=i;
     }


 }

   cout<<q;



}

