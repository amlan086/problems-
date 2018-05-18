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




int main()
    {

int n;
cin>>n;
string s;
cin>>s;
int t,cnt=0;

if(n==1)
{
    if(s[0]=='1')
        cout<<"Yes";
    else
        cout<<"No";
    return 0;


}


loop1(i,s.length()-1)
{
if(s[i-1]=='1'&&s[i]=='1')
{
    cout<<"NO";
    return 0;
}
}


if(s[0]=='0'&&s[1]=='0')
  {
                cout<<"No";
                return 0;
        }

 else if(s[n-1]=='0'&&s[n-2]=='0')
 {
                cout<<"No";
                return 0;
        }


    for(int i=1;i<n-1;i++)
    {
        if(s[i-1]=='0'&&s[i]=='0'&&s[i+1]=='0')
        {
                cout<<"No";
                return 0;
        }
    }
    cout<<"Yes";





}









