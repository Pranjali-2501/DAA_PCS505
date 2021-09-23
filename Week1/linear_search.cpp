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
        cout<<"Present "<<i+1<<"\n";
    }else{
        cout<<"not present "<<n<<"\n";
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
        linearSearch(arr,n,key);
    }
}