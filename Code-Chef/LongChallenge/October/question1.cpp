//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;
#define ll long long 

int main()
{
    ll t; 
   	in(t)
    while (t--)
    { 
	    int n,sum=1;cin>>n; 
	    if(n==1){
	    	out(1)
	    	continue;
	    } 
	    while(sum*2 <= n)
	    	sum *= 2; 
	    int b = n-sum+1; 
	    if(n == sum)
	    	out(sum/2)
	    else out(max(sum/2,b))
    }
    return 0;
}

