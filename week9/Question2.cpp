#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

struct sack
{
    int weight;
    int volume;
    int index;
};
struct comp
{
    bool operator()(sack s1,sack s2)
{
     return s1.volume/(float)s1.weight>s2.volume/(float)s2.weight;
}
};



int main()
{
    int n,k;
    float ans=0.0;
    cin >> n;
    vector<sack> v;
    vector<pair<int,int>> iw;
    for(int i=0;i<n;i++)
    {
        sack t;
        cin >> t.weight >> t.volume;
        t.index = i;
        v.push_back(t);
    }
    sort(v.begin(), v.end(), comp());
    cin >> k;
    for(int i=0;i<n;i++)
    {
        if(v[i].weight<=k)
        {
            ans=ans+v[i].volume;
            k=k-v[i].weight;
            iw.push_back({v[i].index,v[i].weight});
        }
        else
        {
            ans=ans+v[i].volume/(float)v[i].weight*k;
            int x=ceil(v[i].volume/(float)v[i].weight*k);
            iw.push_back({v[i].index,x});
            break;
        }
    }
    cout << ans << endl;
    for(auto i : iw)
    {
        cout << i.first+1 << " - " << i.second << endl;
    }
    return 0;
}