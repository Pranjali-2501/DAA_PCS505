#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[],int n,int key)
{   int i,found=0;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            found=1;
            break;
        }
    }
    if(found)
    {
        cout<<"Key was present at position "<<i+1;
    }else{
        cout<<"Key not present";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Key\n";
    cin>>key;
    linearSearch(arr,n,key);
}