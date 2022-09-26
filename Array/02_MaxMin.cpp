#include<bits/stdc++.h>
using namespace std;
 
  int getMax(int arr[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
      // if(arr[i]>max){
      //   max=arr[i];
      // }
      maxi = max(maxi,arr[i]); // Predefind max and min function
    }
    return maxi;
  }
   int getMin(int arr[],int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
      // if(arr[i]<min){
      //   min=arr[i];
      // }
      mini = min(mini,arr[i]);
    }
    
    return mini;
  }
  
   int main()
{
  int arr[100] ={12,-36,-2,100,98};
  cout<<"The maximum element is:"<<getMax(arr,5)<<endl;
  cout<<"The minimum element is:"<<getMin(arr,5)<<endl;
  return 0;
}