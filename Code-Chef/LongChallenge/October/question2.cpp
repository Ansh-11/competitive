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
        int n; 
        in(n)
        if(n==0)
            out(1) 
            else if(n==1 || n==2)
                    out(2) 
                else
                { 
                    int sum = 1; 
                    while(2*sum <= n)
                        sum*=2; 
                    if(sum == n)
                        out(n) 
                    else if(n == (2*sum - 1)) 
                            out((n+1))
                        else
                            out(sum) 
                } 
    } 
    return 0; 
} 
