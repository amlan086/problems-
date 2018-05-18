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
int n,mm;
cin>>n>>mm;
int a[n],b[n];
map<int,int>m;
set<int>st;
int chk[110];
ms(chk,0);
loop(i,n){
cin>>a[i]>>b[i];
if(st.find(a[i])!=st.end())
  {

    m[a[i]]=max(m[a[i]],b[i]);
  }
else
    {m[a[i]]=b[i];
st.insert(a[i]);
}
}
int e,s;
bool f=0;
for(auto it=m.begin();it!=m.end();it++)
{
 s=it->first;

if(f==1)
{
  if(e>=s)
    chk[e]=1;
}
e=it->second;
for(int i=s;i<e;i++)
{

    chk[i]=1;
}
f=1;
for(int i=0;i<=mm;i++)
{cout<<chk[i]<<" ";
}cout<<endl;
}
if(e==mm)
    chk[mm]=1;
for(int i=0;i<=mm;i++)
{
    if(chk[i]==0)
    {
        cout<<"NO";
        return 0;
    }
}

cout<<"YES";






    }
