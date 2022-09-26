#include<stdio.h>
    void swap(int *xp,int *yp){
      int temp = *yp;
      *yp = *xp;
      *xp =temp;
    }
    void printArray(int arr[],int n){
      for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
      }
      printf("\n");
    }
    void selectionSort(int arr[],int n){
      int j,minIndex;
      for(int i=0;i<n-1;i++){
         minIndex = i;
         for(j=i+1;j<n;j++){
          if(arr[j]<arr[minIndex]){
            minIndex = j;

          }
         }
         swap(&arr[i],&arr[minIndex]);
      }

    }
int main() {
  int arr[] ={44,33,22,66,77,11};
  int n = sizeof(arr)/sizeof(arr[0]);
  printArray(arr,n);
  selectionSort(arr,n);
  printf("The sorted array is :\n");
  printArray(arr,n);
  return 0;
}