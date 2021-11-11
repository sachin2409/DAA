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
    vector<bool> visited(n,false);
    vector<int> dist(n,INT_MAX);
    dist[0]=0;
    int u;
    for(int i=0;i<n-1;i++)
    {
        u=-1;
        for(int j=0;j<n;j++)
        {
            if(visited[j]==false && (u==-1||dist[j]<dist[u]))
                u=j;
        }
        visited[u]=true;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0 && visited[j]==false)
                dist[i]=min(dist[i],dist[u]+arr[u][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}
