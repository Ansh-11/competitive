// #include <bits/stdc++.h>
#include <iostream>
#include <math.h>
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
		ll a,b;
		cin>>a>>b;
		int flag=0;
		for (ll i = 0; i < 20; i++)
		{
			if((long long)powl(b,i)%a==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
			out("NO")
		else
			out("YES")
	}
	return 0;
}

