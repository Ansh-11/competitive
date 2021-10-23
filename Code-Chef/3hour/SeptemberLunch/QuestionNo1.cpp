#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define out(st) cout << st << endl ;
#define pb(vec,num) vec.push_back(num);
#define ous(st) cout << st << " " ;
#define in(num) cin >> num;

int main()
{
	ll int t;
	in(t);
	while (t--)
	{
		int N;
		vector<int>v;
		vector<int>nv;
		in(N);
		if(N%4!=0)
		{
			out("NO");
			continue;
		}
		int a=1,b=N;
		int cond=N/2;
		int flag=0;
		while(cond)
		{
			if(flag==0)
			{
				pb(v,a);
				a++;
				flag=1;
			}
			else
			{
				pb(v,b);
				b--;
				flag=0;
			}
			cond--;
		}
		out("YES");
		for (int i = a; i <=b; i++)
			nv.push_back(i);
		sort(v.begin(),v.end());
		sort(nv.begin(),nv.end());
		for(auto i:v)
			ous(i);
		out("");
		for(auto i:nv)
			ous(i);
		out("");
	}
	return 0;
}
