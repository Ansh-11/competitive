#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        int d= (abs(a-b));
        if(d%2==0)
        {
            int temp=(a+b-d)/2+1;
            cout<<temp<<endl;
            for(int i=d/2;i<=(a+b-d/2);i+=2)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            int temp=(a + b - (d - 1) / 2 + 1 - (d - 1) / 2);
             cout<<temp<<endl;
            for(int i=(d-1)/2;i<=a + b - (d - 1) / 2;i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }

}
