#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n,flag=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(v[i]==v[j])
                c++;
        }
        if(c>n/2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    int median;
    if(n%2==0)
    {
        median=(v[(n-1)/2]+v[(n+1)/2])/2;
    }
    else
        median=v[n/2];

    cout<<median;
    return 0;
}