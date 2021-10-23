#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define tc int times;cin>>times;
#define endl "\n"
#define fast_io  ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define all(v) v.begin,v.end()

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int a, b, c, x, y, z;
		cin >> a >> b >> c >> x >> y >> z;
		int ans = 0;
		for (int j = 0; j <= 20; ++j)
			for (int k = 0; k <= 20; ++k)
				for (int e = 0; e <= 20; ++e)
					if (a*j + b*k + c*e <= 240)
						ans = max(ans, x*j + y*k+z*e);
	cout << ans << '\n';
  }

}
