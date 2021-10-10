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
		string st;
		in(st);
		char status='1';
		ll count=0;
		for(auto i=st.begin();i!=st.end();++i)
			if(*i!=status){
				count++;
				status=*i;
			}
		out(count);
	}
	return 0;
}
