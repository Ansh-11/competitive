//#include <bits/stdc++.h>
#include <iostream>
#include <array>
#define out(st) cout << st << endl ;
#define in(num) cin >> num;
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    ll gcd( ll a, ll b ){
    	if(b==0)
    	    return a;
    	else
    	    return gcd( b, a%b );
    }
    
    ll lcm (ll a, ll b)
    {
    	return (a*b)/gcd(a,b);
    }	
    cout<<lcm(67,89)<<endl;
    end = std::chrono::high_resolution_clock::now();
    ll elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
    cout << "\nElapsed Time: " << elapsed_time << "ms\n"
    return 0;
}