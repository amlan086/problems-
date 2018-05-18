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
int r[8]={-1,-1,-1,0,0,1,1,1};
int c[8]={-1,0,1,-1,1,-1,0,1};

int n,m;
int chk(int a,int b)
{
    if(a<0||b<0||a>=n||b>=m)
        return 0;
    return 1;

}


int main()
    {



cin>>n>>m;
char cc;
int a[n][m];
loop(i,n)
{  loop(j,m)
{
    cin>>cc;
    if(cc=='*')
        a[i][j]=-1;
    else if(cc=='.')
        a[i][j]=0;
    else
        a[i][j]=cc-'0';


}
}

//loop(i,n)
//{  loop(j,m)
//{cout<<a[i][j]<<" ";
//}
//cout<<endl;
//}
//cout<<endl;


loop(i,n)
{
     loop(j,m)
{
    int cnt=0;


    loop(k,8)
    {
        int p=i,q=j;
        p+=r[k];
        q+=c[k];
        if(chk(p,q))
        { //  cout<<p<<" "<<q<<" "<<a[p][q]<<endl;
            if(a[p][q]==-1)
                cnt++;
        }

    }
    //cout<<endl;
    if(cnt!=a[i][j]&&a[i][j]!=-1)
    {  // cout<<i<<" "<<j<<" "<<cnt<<endl;
        cout<<"NO";
        return 0;
    }
}}


cout<<"YES";

    }





