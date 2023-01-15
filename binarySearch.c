
#include <stdio.h>

int binarySearch(int arr[] ,int size, int item){
    
    int beg = 0;
    int end = size - 1;
    int midIndex;
    
    while(beg <= end){
       midIndex = (beg + end)/2;
    if(arr[midIndex] == item){
        
        return midIndex;
        
    }else if(item > arr[midIndex]){
        beg = midIndex + 1;
        
    }else{
        end = midIndex - 1;
    }
    
  }
  return printf("item not found\n");
}


void inputArr(int arr[], int size){
    
    for(int i= 0 ; i < size; i++){
        
        scanf("%d",&arr[i]);
    }
    
 }

int main()
{
   int arr[100];
   int size = 5;
   int index;
   
   inputArr(arr,size);
   
   index = binarySearch(arr,size,5);
   printf("Element found at %d index\n", index);
   

    return 0;
}
