#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
void insertionSort(int arr[],int n)
{
    int comparisons=0;
    int swaps=0; 
    for(int i=1;i<n;i++)
    {
        swaps++;
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            swaps++;
            comparisons++;
        }
       
        arr[j+1]=key;
    }
    print(arr,n);
    cout<<"\n";
    cout<<"comparisons"<<" "<<comparisons<<"\n";
    cout<<"swaps"<<" "<<swaps<<"\n";
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