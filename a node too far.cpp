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


vector<int>adj[10000];
int lev[10000];
int vis[10000];

 int s,t;
 int cnt;
void bfs(int a,int l)
{   cnt--;
    queue<int>q;
    q.push(a);
    vis[a]=1;
    while(!q.empty())
    {

        int u=q.front();
        q.pop();
        loop(i,adj[u].size())
        {   int aa=adj[u][i];

               vis[aa]=1;
            if(vis[aa])
                continue;
            q.push(aa);
            lev[aa]=lev[u]+1;
                   if(lev[aa]>l)
                return;
            cnt--;



        }

}

return;
}
int c[1000000];
 int n;
int main()
{
    while(cin>>n)
    {
        ms(adj,0);
        ms(c,0);

        for(int i=0;i<n;i++)
        {

            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);

           if(c[a]==0)
                {cnt++;
                c[a]++;}


                 if(c[b]==0)
               {cnt++;
                c[b]++;}



        }


        while(cin>>s>>t)
        {
           ms(vis,0);
        ms(lev,0);
            if(s==0&&t==0)
                break;
            cnt=n;
            bfs(s,t);
            cout<<cnt<<endl;

        }







    }}
