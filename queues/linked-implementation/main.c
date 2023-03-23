#include "main.h"


int item;


int main()
{

    printf("Welcome to DataFlair tutorials!\n\n");
    int choice;
    printf ("LINKED LIST IMPLEMENTATION OF QUEUES\n\n");
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
   SN* ptr;
   ptr = (SN*)malloc(sizeof(SN));
    printf("\nEnter item : \n");
    scanf("%d",&item);
    

    if(ptr == NULL){
        printf("\nOverflow\n");
    }else{
        ptr->data = item;
        if(front == NULL){
            front = ptr;
            rear = ptr;
            front->link= NULL;
            rear -> link =NULL;
        }else{
            rear->link = ptr;
            rear = ptr;
            rear->link = NULL;
        }
    }


}
void delet()
{
    SN* ptr;
    if(front == NULL){
        printf("\nUnderflow\n");
        return;
    }else{
        ptr = front;
        front = front->link;
        free(ptr);
    }

}
void display()
{
    SN* ptr;
    ptr = front;
    if(front == NULL){
        printf("\nEmpty\n");
    }else{
        printf("\nPrinting values\n-----------\n");
        while (ptr != NULL)
        {
            printf("\n values : %d ",ptr->data);
            ptr = ptr->link;
        }
        
    }
}