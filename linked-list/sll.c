#include <stdio.h>
#include <stdlib.h>

/**
 * @d -  sll - singly linked list
 * stucts are used to create linked templates
 * malloc for allocating storage
 * newnode give access to the struct
 * temp for tranversing
 * SN - struct node
*/
struct node
{
    int data;
    struct node *next;
};
typedef struct node SN;

int main(void)
{
    //allocating the link
    SN *head,*newnode,*temp;
    int choice = 1;
    //set head to 0 since no node exits
    head = 0;
    while (choice)
    {
        newnode = (SN*)malloc(sizeof(SN));

        //accepting input for data
        printf("Enter data : \n");
        scanf("%d",&newnode ->data);
        //set the next address = 0;
        newnode ->next =0;

        //putting the node into a list
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
    //displaying data
    temp = head;
    while (temp != 0)
    {
        printf("list : %d\n",temp -> data);
        temp = temp ->next;
    }
    
    
    return 0;
}