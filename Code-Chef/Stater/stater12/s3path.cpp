#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#define endl "\n"
using namespace std;
typedef long long ll;
typedef long double ld;
struct mycmp
{
    bool operator()(pair<int,int>a,pair<int,int>b)const
    {
        return (a.first<b.first) || (a.first==b.first && a.second>b.second);
   }
};
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int times;
    cin>>times;
    while(times--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        if(n==1)
			cout<<(m-1)*x<<endl;
        else if(m==1)
				cout<<(n-1)*x<<endl;
			else
			{
		        ll ans=(n-1+m-1)*x;
		        ll x1=min(n,m);
		        ll p=min(x,y);
		        ll h=(n-x1+m-x1);
		        if(h&1)
					ans=min(ans,(x1-1)*y+(n-x1+m-x1-1)*p+x);
		        else
					ans=min(ans,(x1-1)*y+(n-x1+m-x1)*p);
		        cout<<ans<<endl;
			}
    }
}
