#include <stdio.h>

int top = -1, arr[3],max = 3;


int isFull(){
    
    if(top == max){
        
        return 1;
    }else{
        
        return 0;
    }
    
}


int isEmpty(){
    
    if(top == -1){
        
        return 1;
    }else{
        
        return 0;
    }
    
}

int peek(){
    
    return arr[top];
}



int push(int x){
    
    if(!isFull()){
        
        top = top + 1;
        arr[top] = x;
    }else{
        
        printf("Stack OverFlow\n");
    }
    
    return 0;
}


int pop(){
    
    int x;
    
    if(!isEmpty()){
        
        x = arr[top];
        top = top - 1;
        return x;
        
    }else{
        
        printf("Stack underflow\n");
    }
    return 0;
}



int main()
{
    push(5);
    pop();
    push(3);
    push(6);
    pop();
    push(0);
    pop();
    push(7);
    
    printf("Element at the top is %d\n",peek());
    printf("Elements - \n");
    while (!isEmpty()) {
        int x = pop();
        printf("%d\n",x);
    }
    
    return 0;
}
