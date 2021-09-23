#include<iostream>
using namespace std;
int comparisons;
void merge(int array[],int l,int m,int r,int comparisons)
{
  int i, j, k, nl, nr;
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
          comparisons++;
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      comparisons++;
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
void printArray(int arr[],int n,int comparisons)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ncomparisons  "<<comparisons<<"\n";
}
void mergeSort(int arr[],int lb,int ub,int comparisons)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergeSort(arr,lb,mid,comparisons);
        mergeSort(arr,mid+1,ub,comparisons);
        merge(arr,lb,mid,ub,comparisons);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        comparisons=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergeSort(arr,0,n,comparisons);
        printArray(arr,n,comparisons);
    }
    return 0;
}