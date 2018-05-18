#include<bits/stdc++.h>
using namespace std;

#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sfii(a,b)         scanf("%d %d",&a,&b)
#define sfll(a,b)        scanf("%lld %lld",&a,&b)
#define sfiii(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sflll(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define sfd(a)            scanf("%lf",&a)
#define sc               scanf

#define pr               printf
#define pf(a)            printf("%d",a)
#define pfl(a)           printf("%lld",a)
#define pfii(a,b)         printf("%d %d",a,b)
#define pfll(a,b)        printf("%lld %lld",a,b)
#define pfiii(a,b,c)      printf("%d %d %d",a,b,c)
#define pflll(a,b,c)     printf("%lld %lld %lld",a,b,c)
#define pfd(a)            printf("%lf"&a)

#define pii              pair <int,int>
#define pll              pair <long long,long long>
#define mp               make_pair

#define ll               long long
#define ull              unsigned long long

#define PI               2*acos(0.0)
#define ms(a,b)          memset(a, b, sizeof(a))
#define pb(a)            push_back(a)

#define loop(i,n)        for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define pf_case         printf("Case %d: ",z)
#define all(a)           a.begin(),a.end()
#define mod             1000000007

#define inf              (1<<28)
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
//vector<pair<int, pair<int,int> > >v;


int main()
    {

    int hh,mm;
    cin>>hh>>mm;
    double h,d,c,n,t=0;
    cin>>h>>d>>c>>n;
    if(mm==0)
   t=abs(20-hh)*60;
    else
   t=abs(20-(hh+1))*60+(60-mm);

   if(hh>=20)
    {cout<<fixed<<(.8*c)*ceil(h/n);
     return 0;
    }
    double h1,h2;
    h1=h+t*d;
    h2=h;

    int nn1=ceil(h1/n);
    int nn2=ceil(h2/n);

    double c1=nn1*(.8*c);
    double c2=nn2*c;
  // cout<<nn1<<" "<<nn2<<" "<<c<<" "<<(.8*c)<<" "<<c1<<" "<<c2<<endl;



    cout<<fixed<<min(c1,c2);








    }





