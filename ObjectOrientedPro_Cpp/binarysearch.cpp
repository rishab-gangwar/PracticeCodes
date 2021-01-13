#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int x) 
{ 
    if (right >= left) { 
        int mid = left + ((right - left) / 2); 
   
        if (arr[mid] == x) 
           return mid; 
        if (arr[mid] > x) 
           return binarySearch(arr, left, mid - 1, x); 
  
       return binarySearch(arr, mid + 1, right, x); 
    } 
    return -1; 
} 
int main()
{   int n;
    cout<<"Enter the number of the total number of elements:"<<endl; 
    cin >> n;
    int arr[n];
    cout<<"Enter the number of the all elements:"<<endl;
    for(int i=0;i<n;i++)
      cin>>arr[n];
    cout<<"Enter the element you want search:"<<endl;
    int f;
    cin>>f;
   cout<<binarySearch(arr,0,n-1,f);
     
}    
    
    
    
