#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[],int n,int key)
{
    
    int j = sqrt(n);
    int k = 0;
    int cmp=0;
    while (arr[min(j, n)-1] < key)
    {
        k = j;
        j += sqrt(n);
        cmp++;
    }
 
    while (arr[k] < key)
    {
        k++;
        cmp++;
    }
    if (arr[k] == key)
        cout<<"Present "<<cmp<<"\n";
    else{
        cout<<"Not Present "<<cmp<<"\n";
    }
}
int main()
{   
    int n,t,index;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key,index;
        cin>>key;
        binarySearch(arr,n,key);
    }
}