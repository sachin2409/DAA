#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,d;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<int> dist(n,INT_MAX);
    dist[0]=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0)
            {
                if(dist[i]!=INT_MAX&&dist[j]>(dist[i]+arr[j][i]))
                {
                    dist[j]=min(dist[j],(dist[i]+arr[j][i]));
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}
