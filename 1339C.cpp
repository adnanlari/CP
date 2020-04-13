#include <bits/stdc++.h> 
using namespace std; 
  
int _mergeSort(int arr[], int temp[], int left, int right); 
int merge(int arr[], int temp[], int left, int mid, int right); 
  
int mergeSort(int arr[], int array_size) 
{ 
    int temp[array_size]; 
    return _mergeSort(arr, temp, 0, array_size - 1); 
} 
int _mergeSort(int arr[], int temp[], int left, int right) 
{ 
    int mid, ans=0; 
    if (right > left) { 
        mid = (right + left) / 2; 
        ans=max(ans, _mergeSort(arr, temp, left, mid)); 
        ans=max(ans, _mergeSort(arr, temp, mid + 1, right)); 
        ans=max(ans,merge(arr, temp, left, mid + 1, right)); 
    } 
    return ans; 
} 

int merge(int arr[], int temp[], int left, 
          int mid, int right) 
{ 
    int i, j, k; 
    int ans = 0; 
    ans=max(ans, arr[mid-1]-arr[mid]);
  
    i = left; 
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right)) { 
        if (arr[i] <= arr[j]) { 
            temp[k++] = arr[i++]; 
        } 
        else { 
            temp[k++] = arr[j++];
            //inv_count = inv_count + (mid - i); 
        } 
    } 
    while (i <= mid - 1) 
        temp[k++] = arr[i++];
    while (j <= right) 
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return ans; 
} 
  
// Driver code 
int main() 
{ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int j=1,x=mergeSort(a,n);
       // cout<<x<<" ";
        for(int i=0;i<100;i++)
        {
            if(x<=0)
            {
                cout<<i<<"\n";
                break;
            }
            x-=j;
            j*=2;
        }

    }

    return 0; 
} 