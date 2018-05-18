
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
#define pfd(a)            printf("%lf",&a)

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
//ll bigmod( ll p,ll e,ll M)
// {
//     if(e==0)return 1;
//     if(e%2==0){ll t=bigmod(p,e/2,M);return (ll)((t*t)%M);}
//     return (ll)((ll)bigmod(p,e-1,M)*(ll)p)%M;
// }
//ll modinverse(ll a,ll M){return bigmod(a,M-2,M);}
//
#define Z 250
  int s1[Z];
  int s2[Z];
 int s3[Z];



int main()
    {


    int n;
    string ss[3];
    cin>>n>>ss[0]>>ss[1]>>ss[2];






    set<char>st[3];
     int len=ss[0].length();




      if(n>=len)
    {
        cout<<"Draw";
        return 0;
    }
    loop(i,3)
    {
        loop(j,len)
        {
            st[i].insert(ss[i][j]);
        }

    }

    int t1=st[0].size();
     int t2=st[1].size();
       int t3=st[2].size();


  //cout<<t1<<t2<<t3;

    loop(i,len)
    {
        int k1,k2,k3;
        k1=(int)ss[0][i];
        k2=ss[1][i];
        k3=ss[2][i];

        s1[k1]++;
        s2[k2]++;
        s3[k3]++;

    }
//    loop(i,160)
//    {
//        cout<<i<<" "<<s1[i]<<"====="<<s2[i]<<"====="<<s3[i]<<endl;
//    }

sort(s1,s1+Z);
sort(s2,s2+Z);
sort(s3,s3+Z);


int mx[3],mxx=-inf,chk=0;

int s[3];
s[0]=s1[Z-1];
s[1]=s2[Z-1];
s[2]=s3[Z-1];
loop(i,3)
{
   if(s[i]==mxx)
   {
       chk=1;

   }
   else if(s[i]>mxx)
   {
       mxx=s[i];
       chk=0;

   }

}
//cout<<mxx<<" "<<chk;
string res[3]={"Kuro",
"Shiro",
"Katie"};

if(chk==1)
    cout<<"Draw";
else
{
    loop(i,3)
    {
        if(s[i]==mxx)
        {
            cout<<res[i];
            return 0;
        }
    }

}


    }





