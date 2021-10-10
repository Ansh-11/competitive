#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin >> t;
	while (t--):
    {
		int n;
		cin>>n;
		for(ll i=pow(10,n-1);i<pow(10,n);i++)
		{
			if(i%2!=0 and i%3==0 and i%9!=0 )
			{
				cout<<ans<<endl;
				break;
			}
		}
	}
}
