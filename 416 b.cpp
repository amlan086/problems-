#include<bits/stdc++.h>
using namespace std;


int main()
{



    int n,m;
    cin>>n>>m;
  int a[n+1],b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
   while(m--)
   {
       for(int i=1;i<=n;i++)
    {
        b[i]=a[i];

    }
      int e,s,q;
    cin>>e>>s>>q;


    int aa[s-e+1];
int w=s-e+1;
     for(int i=0,j=s;j>=e;i++,j--)
     {

         aa[i]=a[j];


     }
     sort(aa,aa+w);
      for(int i=e,j=0;i<=s;i++,j++)
     {

         b[i]=aa[j];


     }
//      for(int i=1;i<=n;i++)
//     {
//
//        cout<<b[i]<<" ";
//

  //   }

   if(a[q]==b[q])
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;




   }








}

