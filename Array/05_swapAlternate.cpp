#include<bits/stdc++.h>
using namespace std;

  void printArray(int arr[],int n)
{
        for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
}


void swapAlternate(int arr[],int n){
    for(int i=0;i<6;i+=2){
       if(i+1<n){
        swap(arr[i],arr[i+1]);
      }
    }
  }

    int main()
{
 int arr[6]={1,2,3,4,5,6};
  swapAlternate(arr,6);   
  printArray(arr,6);
  return 0;
}