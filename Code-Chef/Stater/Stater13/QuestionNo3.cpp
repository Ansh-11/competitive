#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define out(st) cout << st << endl ;
#define in(num) cin >> num;

int main()
{
	ll int t;
	in(t);
	while (t--)
	{
		ll p,a,b,c,x,y,an,ch;
		cin>>p>>a>>b>>c>>x>>y;
		an=x*a+b;
		ch=y*a+c;
		out(p/min(an,ch));
	}
	return 0;
}
