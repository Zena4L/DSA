#include "main.h"

/**
 * @d - implementation of queues in array . (FIFO rule)
 * @ insert() - insert into the queues
*/

// global variables

#define LIMIT 100
int rear;
int front;
int queue[LIMIT];
int choice ;

int main()
{
    rear = -1;
    front = -1;

    printf("Welcome to DataFlair tutorials!\n\n");
    printf ("ARRAY IMPLEMENTATION OF QUEUES\n\n");

    do
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delet();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Sorry, invalid choice!\n");
                break;
        }
    } while(choice!=4);

    return 0;
}
void insert()
{
    int element;
    printf("\nEnter element: \n");
    scanf("%d",&element);

    if(rear == LIMIT -1){
        printf("\nQueue overflow");
        return;
    }else{
        if(rear == -1 && front == -1){
            rear = 0;
            front = 0;
        }else{
            rear++;
        }
        queue[rear] = element;
        printf("\nValue inserted \n"); 
    
    }
}
void delet(){
    if(front == -1 || front > rear){
        printf("\nQueue UNDERFLOW");
        return;
    }else{
        printf("\nThe deleted element is : %d\n",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front == -1){
        printf("\nQueue underflow");
        return;
    }else{
        printf("\nPrinting elements : \n");
        for(i=front; i <= rear; i++){
            printf("\nelements : %d\n",queue[i]);
        }
    }
}