#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define out(st) cout << st << endl ;
#define in(num) cin >> num;

int main()
{
	int t;
	in(t);
	while (t--)
	{
		ll n,p,x,y;
		cin>>n>>p>>x>>y;
		p--;
		int ar[n];
		int sum=0;
		for (int i = 0; i < n; i++)
			in(ar[i]);
		for (int i = 0; i <=p; i++)
			if(ar[i]==0)
				sum+=x;
			else
				sum+=y;
		out(sum);
	}
	return 0;
}
