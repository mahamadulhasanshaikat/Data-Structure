#include <stdio.h>

int top = -1;
int stack[5];
int maxSize = 5;

int peek(){
    
    return stack[top];  
}

int isFull(){
    
    if(top == maxSize){
        
        return 1;
    }else{
        
        return 0;
    }
}


int empty(){
    
    if(top == -1){
        
        return  1;
    }else{
        return 0;
        
    }
}

void push(int data){
    
    if(!isFull()){
        top = top+1;
        stack[top]= data;
    }else{
        
        printf("OverFlow\n");
    }
    
}


int pop(){
    int data;
    if(!empty()){
        data = stack[top];
        top = top - 1;
    
    }else{
        
        printf("Underflow\n");
    }
    return data;
}

int main (){
    
    
    push(2);
    push(3);
    push(4);
    push(7);
    push(9);
    push(10);
    pop();
    push(22);
    
    printf("Element at top of the stack: %d\n" ,peek());
   
    printf("Elements: \n");
    
    while(!empty()){
        
        int data = pop();
        printf("%d\t",data);
    }
    
    return 0;
}
