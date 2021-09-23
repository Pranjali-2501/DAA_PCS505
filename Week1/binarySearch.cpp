#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[],int n,int key)
{
    int left=0,right=n-1,mid;
    int found=0,comp=0;
    while(left<right)
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
        {
            found=1;
            break;
        }else if(arr[mid]>key)
        {
            right=mid;
        }else{
            left=mid+1;
        }
        comp++;
    }
    if(found)
    {
        cout<<"Present "<<comp+1;
    }else{
        cout<<"Not Present "<<comp+1;
    }
}
int main()
{   
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        binarySearch(arr,n,key);
    }
}