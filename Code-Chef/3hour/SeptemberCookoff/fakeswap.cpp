#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int start = 0, end = 1;
    cin >> end;
    while (start++ < end)
    {
        ll n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool equal = true;
        for(int i = 0; i < n; i++){
            if(s[i] != t[i]){
                equal = false;
                break;
            }
        }
        if(equal){
            cout << "YES\n";
            continue;
        }
        ll num1 = 0, num2 = 0;
        for(auto x: t){
            if(x == '1'){
                num2++;
            }else{
                num1++;
            }
        }
        if(num2 > 0 and num1 > 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}