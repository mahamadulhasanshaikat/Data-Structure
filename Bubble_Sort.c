
#include <stdio.h>

int isSorted = 0;

int bubbleSort(int arr[], int size){
    
    int swap;
    
    for(int i = 0; i < size - 1; i++){
        
        printf("\n\nThe number of passes is %d\n",i+1);
        isSorted = 1;
        
        for(int j = 0; j < size - 1 - i; j++){
            
            if(arr[j] > arr[j+1]){
             
            swap = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = swap; 
            isSorted = 0;
                
            }
            
        }
        
        if(isSorted){
            return 0;
        }
    }
    
}

void inputArr(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        
        scanf("%d",&arr[i]);
    }
}

void printArr(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        
        printf("%d\t",arr[i]);
    }
}



int main()
{
    int arr[100];
    int size = 5;
    
    printf("Input Element\n");
    inputArr(arr,size);
    
    printf("The Array Before Sorted\n");
    printArr(arr,size);
    
    bubbleSort(arr,size);
    printf("\nThe Array After Sorted \n");
    printArr(arr,size);
   
    return 0;
}
