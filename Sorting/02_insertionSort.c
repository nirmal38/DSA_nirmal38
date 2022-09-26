#include<stdio.h>
 void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
   }
  void insertionSort(int arr[],int n){
    int j,key;
    for(int i=1;i<=n-1;i++){
      key =arr[i];
      j =i-1;
      while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
      }
      arr[j+1] = key;
    }
  }
int main() {
  int arr[] = {7,6,3,8,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  printArray(arr,n);
  insertionSort(arr,n);
  printArray(arr,n);
  return 0;
}