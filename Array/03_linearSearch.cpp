#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key)
    return 1;
  }
  return 0;

}

  int main()
{
  int arr[100];
  int size,key;
  cout<<"Enter array size:"<<endl;
  cin>>size;
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  cout<<"Enter key element:"<<endl;
    cin>>key;

    bool found = linearSearch(arr,size,key);

    if(found){
      cout<<"Element is present.\n";
    }
    else 
       cout<<"Element is absent.\n";

  return 0;
}