#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @d -  sll - singly linked list
 * stucts are used to create linked templates
 * malloc for allocating storage
 * newnode give access to the struct
 * temp for tranversing
 * SN - struct node
 * with inner comments removed
*/
struct node
{
    int data;
    struct node *next;
};
typedef struct node SN;

// SN *head,*newnode,*temp;



int main(void)
{  
    
    // char ans[] = "yes";
    createNode();
    insertBegin();
    insertEnd();
   
    return 0;
}

void createNode ()
{
    SN *head,*newnode,*temp;
    head = 0;
    int choice = 1;
    while (choice)
    {
        newnode = (SN*)malloc(sizeof(SN));

        printf("Enter data : \n");
        scanf("%d",&newnode ->data);
        newnode ->next =0;

        if(head == 0)
        {
            head = temp = newnode;
        }else
        {
            temp ->next = newnode;
            temp = newnode;
        }
        printf("Enter 1 to continue or 0 to exit : ");
        scanf("%d",&choice);
        break;
    }
    // printf("Enter data : \n");
    temp = head;
    while (temp != 0)
    {
        printf("list : %d\n",temp -> data);
        temp = temp ->next;
    }
}

void insertBegin()
{

    SN *head,*newnode,*temp;
    int choice;
    newnode =(SN *) malloc(sizeof(SN));

    printf("Do you want to insert at beginning, if Yes press 1 : ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("Enter data : \n");
        scanf("%d",&newnode ->data);

        newnode->next = head; //points to the first node
        head = newnode;

        temp = head;
        while (temp != 0)
        {
            printf("list : %d\n",temp -> data);
            temp = temp ->next;
        }
    }else
    {
        printf("quit ...");
        
    }


}
void insertEnd()
{
    SN *head,*newnode,*temp;
    // int choice;
    newnode =(SN *) malloc(sizeof(SN));
    int choice;


    printf("\nDo you want to insert at end, if Yes press 1 : ");
    scanf("%d",&choice);

    if(choice == 1){
    printf("Enter data : \n");
        scanf("%d",&newnode -> data);
        newnode->next = 0; //points to the last node

        //transverse with temp
        temp = head; // set temp to first element

        while (temp ->next != 0)
        {
            temp = temp ->next; //transverse
        }
        temp -> next = newnode; 
            temp = head;
        while (temp != 0)
        {
            printf("list : %d\n",temp -> data);
            temp = temp ->next;
        }
    }else
    {
        printf("\nexiting .. ");
    }




}