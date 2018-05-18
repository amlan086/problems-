#include<bits/stdc++.h>
using namespace std;

#define push_back pb
#define ll long long
int main()
{


int n,m;
cin>>n>>m;

for(int i=1;;i++)
{

    if(i%2!=0)
    {
        n=n-i;
        if(n<0)
            {cout<<"Vladik";
            break;
    }}
    else
    {
         m=m-i;
         if(m<0)
        {cout<< "Valera";
        break;
    }

//cout<<i<<" "<<n<<" "<<m;
}

//cout<<i<<" "<<n<<" "<<m;


}}
