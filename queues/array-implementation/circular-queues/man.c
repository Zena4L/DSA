#include "main.h"


#define LIMIT 100

// global variables

int cqueue[LIMIT];
int front;
int rear;


int main()
{

    return 0;
}
void insert()
{
    int element;
    if((front == 0 && rear == LIMIT-1) || (front == rear+1)){
        printf("\nQueue overflow\n");
    }else if( front == -1){ // empty queue
        front = rear = 0;
    }else{
        printf("\nEnter item : \n");
        scanf("%d",&element);
        if(rear = LIMIT - 1){ // last element
            rear = 0; //to connect to the front 
        }else{
            rear ++;
        }
        cqueue[rear] = element;
    }
}
void delet()
{

    if(front == -1){
        printf("\nQueue underflow\n");
    }else if (front == rear){
        printf("\nDeleting element : %d\n",cqueue[front]);
        front = rear = 1;
    }else{
        printf("\nDeleting element : %d\n",cqueue[front]);
        front = (front + 1)% LIMIT;
    }
}