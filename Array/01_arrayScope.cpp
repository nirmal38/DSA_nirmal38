#include<bits/stdc++.h>
using namespace std;

void updateArray(int arr[],int n){
    cout<<"Updated array is :\n";
  arr[0]=0;
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
  }
   cout<<"\n";

}

  int main()
{
  int arr[3] ={1,2,3};
  updateArray(arr,3);
  cout<<"Print array in the main function:"<<endl;
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}