#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,d,res=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<int> key(n,INT_MAX);
    vector<bool> mst(n,false);
    vector<int> parent(n,-1);
    key[0]=0;
    parent[0]=-1;
    for(int c=0;c<n-1;c++)
    {
        int mini=INT_MAX,u=-1;
        for(int v=0;v<n;v++)
        {
            if(mst[v]==false && key[v]<mini)
            {
                mini=key[v];
                u=v;
            }
        }
        mst[u]=true;
        res+=key[u];
        for(int v=0;v<n;v++)
        {
            if(mst[v]==false && arr[u][v]!=0)
                key[v]=min(key[v],arr[u][v]);
        }
    }
    cout<<res<<endl;
    return 0;
}