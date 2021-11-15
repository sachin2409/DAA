#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}

int main()
{
    vector<pair<int,int> > v;
    int n;
    cin >> n;
    vector<int> selected;
    int time[n],deadline[n];
    for(int i=0;i<n;i++)
    {
        cin >> time[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> deadline[i];
    }
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(time[i],deadline[i]));
    }
    sort(v.begin(),v.end(),comp);
    int currtime=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second-currtime>=v[i].first)
        {
            c++;
            selected.push_back(i+1);
            currtime+=v[i].first;
        }
    }
    cout << "Max number of tasks : " << c << endl;
    cout << "Selected task number : ";
    for(int i=0;i<selected.size();i++)
    {
        cout << selected[i] << " ";
    }
    return 0;
}