#include "main.h"


int main()
{
    printf("Welcome to DataFlair tutorials!\n\n");
    int choice;
    printf ("LINKED LIST IMPLEMENTATION USING STACKS\n\n");
    do
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
    switch(choice)
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
    } while(choice!=4);

    return 0;
}

void push()
{
    SN *ptr = (SN*)malloc(sizeof(SN));
    int data;
    if(ptr == NULL){
        printf("\nStackoverflow");
    }else{
        printf("\nEnter data : ");
        scanf("%d",&data);

        if(head == NULL){
            ptr->data = data;
            ptr->next = NULL;
            head = ptr;
        }else{
            ptr->data = data;
            ptr->next = head;
            head = ptr;
        }
    }
}
void pop()
{
    SN* ptr;
    int item;
    if(head == NULL)
    {
        printf('\nStackoverflow');
    }else{
        item = head->data;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("\nItem deleted");
    }
}
void display()
{
    int i;
    SN* ptr;
    ptr = head;
    
    if(ptr == NULL){
        printf("\nStack overflow");
    }else{
        printf("The elements of the stack are:\n");
        while (ptr != NULL)
        {
            printf("\n--------------------------\n");
            printf("\nPrinting items : \n%d",ptr->data);
            printf("\n--------------------------\n");
            ptr = ptr->next;
        }
        
    }
}