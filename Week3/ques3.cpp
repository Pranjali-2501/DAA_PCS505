#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
    int i=0;
    int flag=0;
    sort(arr,arr+n);
    while(i<n-1)
    {
        if(arr[i]==arr[i+1])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
    {
        cout<<"Yes"<<"\n";
    }else{
        cout<<"No"<<"\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertionSort(arr,n);
    }
}