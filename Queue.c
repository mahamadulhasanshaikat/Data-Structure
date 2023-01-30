#include <stdio.h>
#define SIZE 5

int items[SIZE], front = -1, rear = -1;

void enQueue(int value) {
    
  if (rear == SIZE - 1){
    printf("\n Queue is Full! ");
  }else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\n Inserted %d", value);
  }
}

void deQueue() {
  if (front == -1){
    printf("\n Queue is Empty! ");
  }else {
    printf("\n Deleted : %d", items[front]);
    front++;
    if (front > rear){
      front = rear = -1;
    }
  }
}

void display() {
  if (rear == -1){
    printf("\n Queue is Empty! ");
    
  }else {
    printf("\n Queue elements are: ");
    for (int i = front; i <= rear; i++)
    
      printf("%d  ", items[i]);
  }
  printf(" \n ");
}


int main() {

  deQueue();

  enQueue(2);
  enQueue(4);
  enQueue(6);
  enQueue(8);
  enQueue(9);

  enQueue(6);

  display();

  deQueue();
  deQueue();

  display();

  return 0;
}
