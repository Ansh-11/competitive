#include <bits/stdc++.h>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;


void solve()
{

	int q, n, l, r, number, sum, min, sum2;
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> n >> l >> r;
	if(n >= l && n <= r){
		cout << n <<"\n";
		continue;
	}
	if(n < l){
		cout << l <<"\n";
		continue;
	}
	sum2 = INT_MAX;
	min = 0;
	while(l<r && n/r<r){
		int temp1 = n / r, temp2 = n % r;
		if(sum2 > temp1 + temp2){
			sum2 = temp1 + temp2;
			min = r;
		}
	 	r = n / (temp1 + 1);
	}
	while(l <= r){
		number = n;
	 	sum = 0;
		while(1){
			if(number < l){
	 			sum += number;
				if(sum < sum2){
	 				min = l;
	 				sum2 = sum;
				}
				break;
			}
	 		sum += number % l;
	 		number /= l;
			if(sum >= sum2)
				break;
		}
	 	l++;
	}
	 cout << min <<"\n";
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}