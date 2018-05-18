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

int a[100000];
int main()
    {

int n;
cin>>n;
string h,m;
cin>>h>>m;

if(h[0]=='7'||h[1]=='7'||m[0]=='7'||m[1]=='7')
{
    cout<<0;
    return 0;
}

int hh,mm;
hh=(h[0]-'0')*10+(h[1]-'0');
mm=(m[0]-'0')*10+(m[1]-'0');
int cnt=0;
while(1)
{
   mm=mm%60;
   hh=hh%24;
    if(mm-1<0)
        mm=59;
    else
        mm--;

    if(mm==59)
    {  if(hh-1<0)
        hh=23;
    else
        hh--;


    }
    cnt++;
   if(hh%10==7||mm%10==7)
   {
       if(cnt%n==0)
        break;
   }


     // cout<<hh<<" "<<mm<<" "<<hh%10<<" "<<mm%10<<endl;


}

    cout<<cnt/n;




    }





