#include<bits/stdc++.h>
using namespace std;
#define INF 999999

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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[i][j] > arr[i][k]+arr[k][j])
                {
                    arr[i][j] = arr[i][k]+arr[k][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == INF)
            {
                cout << "INF ";
            }
            else{
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}