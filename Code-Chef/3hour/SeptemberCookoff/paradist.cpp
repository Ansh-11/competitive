#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll test=1;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<long long> arr(n);
        for(long long int i=0;i<n;i++)
            cin>>arr[i];
        if(n>4){
            cout<<"NO"<<endl;
            return 0;
        }
        cout<<"YES"<<endl;
        for(long long int i=0;i<n;i++)
        {
            if(i%4==0)
                cout<<arr[i]<<" 0\n";
            else if(i%4==1)
                cout<<"0 "<<arr[i]<<endl;
            else if(i%4==2)
                cout<<-arr[i]<<" 0\n";
            else
                cout<<"0 "<<-arr[i]<<endl;
        }
    }
    return 0;
}