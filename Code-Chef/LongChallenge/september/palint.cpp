#include<iostream>
#include<map>

using namespace std;

int main()
{

int times;
cin >> times;
while(times--)
{   
    ios_base::sync_with_stdio(false);
    int n, x, maxsum = 0, count = 0;
    cin >> n >> x;
    map<int,int> map,mapx;

    for(int i = 0; i < n; i++)
    {
        int a,temp;
        cin >> a;
        map[a]++;
        temp = a^x;
        mapx[temp] = map[a];
    }

    if(n==1)
    {
        cout << 1 << " " << 0 << endl;
        continue;
    }
    for(auto x: map)
    {
        if(x.second==n)
        {
            maxsum = n;
            break;
        }
        if(x.second>maxsum)
            maxsum = x.second;
    }

    if(x==0)
    {
        cout << maxsum << " " << count << endl;
        continue;
    }

    for(auto i: map)
    {
        if(mapx.count(i.first))
        {
            if(i.second+mapx[i.first]>maxsum)
            {
                maxsum = i.second + mapx[i.first];
                count = min(i.second,mapx[i.first]);
            }
            else if(i.second+mapx[i.first]==maxsum)
            {
                if(min(i.second,mapx[i.first])<count)
                {
                    count = min(i.second,mapx[i.first]);
                }
            }
        }
    }
    cout << maxsum << " " << count << endl;
}


return 0;
}

