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



int main(void)
{  
    createNode();
    return 0;
}

void createNode ()
{
    SN *head,*newnode,*temp;
    int choice = 1;
    head = 0;
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
        printf("Enter 1 to continue or 0 to exit\n");
        scanf("%d",&choice);
    }
    printf("Enter data : \n");
    temp = head;
    while (temp != 0)
    {
        printf("list : %d\n",temp -> data);
        temp = temp ->next;
    }
}