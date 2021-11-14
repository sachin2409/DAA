#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

void heapify(int arr[],int i, int n)
{
    int l=2*i+1,r=2*i+2,min=i;
    if(l<n && arr[l]<arr[min])
        min=l;
    if(r<n && arr[r]<arr[min])
        min=r;
    if(min!=i)
    {
        swap(arr[i],arr[min]);
        heapify(arr,min,n);
    }
}

void buildheap(int arr[],int n)
{
    for(int i=n/2;i>=0;i--)
    {
        heapify(arr,i,n);
    }
}

int extractmin(int arr[],int* n)
{
    int min=arr[0];
    swap(arr[0],arr[*n-1]);
    *n--;
    heapify(arr,0,*n);
    return min;
}

void insertheap(int arr[],int value,int* n)
{
    *n++;
    arr[*n-1]=value;
    for(int i=*n-1;i!=0&&arr[i]<arr[(i-1)/2];)
    {
        swap(arr[i],arr[(i-1)/2]);
        i=(i-1)/2;
    }
}

int main()
{
    int ans=0,n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    buildheap(arr, n);
    while(true)
    {
        if(n==0)
            break;
        int a=extractmin(arr,&n);
        int b=extractmin(arr,&n);
        int sum=a+b;
        cout<<sum;
        ans+=sum;
        insertheap(arr,sum,&n);
    }
    return 0;
}