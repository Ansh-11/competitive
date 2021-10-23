#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll MOD1 = 1e18+7;

void solve() {
    ll n;
     cin>>n;
     vector<ll> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n>4){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
    if(i%4==0)
        cout<<a[i]<<" 0\n";
    else if(i%4==1)
        cout<<"0 "<<a[i]<<"\n";
    else if(i%4==2)
        cout<<-a[i]<<" 0\n";
    else
        cout<<"0 "<<-a[i]<<"\n";
    }
  
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   int tc = 1;
   cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}