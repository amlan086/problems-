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

vector<int>vec[1000];
int clr[1000];

int main()
    {
int n;
cin>>n;

for(int i=2;i<=n;i++)
{
   int a;
   cin>>a;
  // vec[i].pb(a);
   vec[a].pb(i);


}
bool flg=0;
/*
loop1(i,n)
{  int a;
   cin>>a;
   if(clr[i]!=a)
   {clr[i]=a;
   flg=1;
   }
   for(int j=0;j<v[i].size();j++)
   {
       clr[v[i][j]]=a;
   }


}*/
ms(clr,0);
int stp=0;
int ss[1000];
loop1(i,n)
cin>>ss[i];




bool viss[100];
int par[100];
int s=1;

for(int i=1;i<=n;i++)
    clr[i]=ss[1];
    stp++;



    queue<int>myqq;
    myqq.push(s);
    viss[s]=1;

    while(myqq.size()){
        int uu = myqq.front();
        myqq.pop();
        for(int ii=0;ii<vec[uu].size();ii++){
            int src=vec[uu][ii];
            if(viss[src])continue;
            myqq.push(src);
            viss[src]=1;


            int    a=ss[src];

 stack<int>myq;
    myq.push(src);
    bool vis[1000];
    ms(vis,0);
    vis[src]=1;
   bool flg=0;
   if(clr[src]!=a)
    flg=1;
   clr[src]=a;
    while(myq.size()){
        int u = myq.top();

        myq.pop();
        for(int i=0;i<vec[u].size();i++){
            int v=vec[u][i];

            if(vis[v])continue;
            myq.push(v);
            vis[v]=1;
            if(clr[v]!=clr[u])
            {
                flg=1;
            }
            clr[v]=clr[u];
        }
    }

if(flg==1)
    stp++;

    }



        }
        cout<<stp;



    }



