#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void insert(int array[], int *size, int pos, int value) {
    
    if (*size == MAX_SIZE) {
        
        printf("Error: Array is full\n");
        
    } else if (pos < 0 || pos > *size) {
        
        printf("Error: Invalid position\n");
        
    } else {
        
        for (int i = *size; i > pos; i--) {
            array[i] = array[i - 1];
            
        }
        
        array[pos] = value;
        (*size)++;
    }
}

int main() {
    
    int array[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos, value;
    
    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &value);
    
    insert(array, &size, pos, value);
    
    for (int i = 0; i < size; i++) {
        
        printf("%d ", array[i]);
        
    }
    
    return 0;
}
