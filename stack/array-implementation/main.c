#include "main.h"


#define LIMIT 100

int stack[LIMIT];
int top;
int i;
int choice;

int main()
{
    int choice;
    printf("Welcome to DataFlair tutorials!\n\n");
    printf ("ARRAY IMPLEMENTATION USING STACKS\n\n");
    top = -1; //indicating empty stack

    do{
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
    }while(choice != 4);
    return 0;
}

void push(){
    int element;
    if(top == LIMIT -1){
        printf("\nStack overflow");
    }else{
        printf("\nEnter element : ");
        scanf("%d",&element);
        top++;
        stack[top] = element;
    }
}
void pop()
{
    int element;
    if(top == -1){
        printf("\nStack underflow");
    }else{
        element = stack[top];
        printf("\nElement deleted");
        top--;
    }
}
void display()
{
    if(top == -1){
        printf("\nStack Underflow");
    }else if(top >= 0){
        printf("\nDisplaying elements");
        for(i = top; i >=0 ;i--){
            printf("\n---------------------\n");
            printf("\n%d\n",stack[i]);
            printf("\n---------------------\n");
        }
    }
}