#include<bits/stdc++.h>
using namespace std;

struct node{
    int u,v,wt;
    node(int x, int y, int w)
    {
        u=x;
        v=y;
        wt=w;
    }
};

bool comp(node a,node b)
{
    return a.wt<b.wt;
}

int findPar(int nd,vector<int> parent)
{
    if(nd==parent[nd])
    {
        return nd;
    }
    return parent[nd]=findPar(parent[nd],parent);
}

void un(int a,int b,vector<int> &parent,vector<int> &rank)
{
    a=findPar(a,parent);
    b=findPar(b,parent);
    if(rank[a]<rank[b])
        parent[a]=b;
    else if(rank[b]<rank[a])
        parent[b]=a;
    else
    {
        parent[b]=a;
        rank[a]++;
    }
}

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
    vector<node> edges;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0)
                edges.push_back(node(i,j,arr[i][j]));
        }
    }
    sort(edges.begin(),edges.end(),comp);

    vector<int> parent(n);
    vector<int> rank(n,0);
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
    }
    vector<pair<int,int> > mst;
    for(node it:edges)
    {
        if(findPar(it.v,parent)!=findPar(it.u,parent))
        {
            res+=it.wt;
            un(it.u,it.v,parent,rank);
        }
    }
    cout<<res<<endl;
    return 0;
}