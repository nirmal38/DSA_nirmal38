#include<stdio.h>

 void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
   }
  int partition(int arr[],int low,int high){
    int pivot =arr[low];
    int i=low+1;
    int j= high;
    int temp;
    do{
      while(arr[i]<=pivot){
        i++;
      }
      while(arr[j]>pivot){
      j--;
    }
    if(i<j){
      temp =arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
        }
    }while(i<j);
    temp = arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
  }

  void quickSort(int arr[],int low,int high){
    int partitionIndex;
    if(low<high){
      partitionIndex = partition(arr,low,high);
      quickSort(arr,low,partitionIndex-1);
      quickSort(arr,partitionIndex+1,high);
    }
  }

int main() {
  int arr[]={33,3,12,1,66,3,99};
  int n=sizeof(arr)/sizeof(arr[0]);
  printArray(arr,n);
  quickSort(arr,0,n-1);
  printArray(arr,n);
  return 0;
}