#include <bits/stdc++.h>
#include <iostream>
#include <array>
#define out(st) cout << st << endl ;
#define in(num) cin >> num;
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    chrono::time_point<chrono::high_resolution_clock> start, end;
    start = chrono::high_resolution_clock::now();
    ll t;
    cin >> t;
	while (t--)
    {
		int n;
		cin>>n;
		cout<< "NUmber entered is 	"<<n<<endl;
		// for(ll i=pow(10,n-1);i<pow(10,n);i++)
		// {
		// 	if(i%2!=0 and i%3==0 and i%9!=0 )
		// 	{
				
		// 		break;
		// 	}
		// }    
	}
    end = chrono::high_resolution_clock::now();
    ll elapsed_time = chrono::duration_cast<chrono::milliseconds>(end-start).count();
    cout << "\nElapsed Time: " << elapsed_time << "ms\n";
    return 0;
}