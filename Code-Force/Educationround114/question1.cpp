//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

int main()
{
    ios_base::sync_with_stdio(false);
    int t=0;
    in(t)
    while(t--)
    {
    	int n;
    	in(n);
    	for (int i = 0; i < n; ++i)
    	{
    		int a=n;
    		int b=n;
    		while(a>0)
    		{
    			for (int j == 1; j <= i && a>0; ++j)
    			{
    				cout<<"(";
    				a--;
    			}
    			cout <<")";
    			b--;
    		}
			for (int k = 1; k <= b; ++k)
			{
				cout << ")";
			}
			out("");
    	}
    }
   	return 0;
}
