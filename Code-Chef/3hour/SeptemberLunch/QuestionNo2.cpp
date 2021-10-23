#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        ll s,e;
        ll mul=3;
	    cin>>s>>e;
	    if(s%mul==0)
	        cout<<(e/mul-s/mul+1)<<endl;
	    else
	        cout<<(e/mul-s/mul)<<endl;
    }
    return 0;
}
