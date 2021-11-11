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
    cin>>s>>d;
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(0);
    bool flag=false;
    visited[0]=true;
    while(q.empty()==false)
    {
        int c=q.front();
        q.pop();
        if(c==d-1)
        {
            flag=true;
            break;
        }
        for(int i=s-1;i<n;i++)
        {
            if(arr[c][i]!=0&&visited[i]==false)
            {
                visited[i]=true;
                q.push(i);
            }
        }
    }
    if(flag==true)
        cout<<"Yes Path Exist"<<endl;
    else
        cout<<"No Such Path Exist"<<endl;
    return 0;
}
