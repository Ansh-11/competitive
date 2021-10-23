#include <iostream>
using namespace std;

int main() 
{
    int test;
    cin >> test;
    while(test--)
    {
        int i, num;
        cin >> num;
        for(i = 1; i <= num; i++) {
            cout << i << " ";
        }
        cout<<"\n";
    }
    return 0;
}