#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
void SelectionSort(int arr[],int n)
{
    int comparisons=0;
    int swaps=0; 
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<arr[i])
           {
               
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
           comparisons++;
       }
       swaps++;
    }
    print(arr,n);
    cout<<"\n";
    cout<<"comparisons"<<" "<<comparisons<<"\n";
    cout<<"swaps"<<" "<<swaps-1<<"\n";
  
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
        SelectionSort(arr,n);
    }
}
