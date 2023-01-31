#include <stdio.h>
#include <stdlib.h>

/**
 * @d - singly linked list having
 * name
 * age
 * id
 * ssn
*/

struct userNode
{
    char name[20];

    struct userNode *next;
};
typedef struct userNode SN;

int main(void)
{
    SN* head,*newnode,*temp;
    head = 0;
    int choice = 1;

    while (choice)
    {   
        //creating node
        newnode = (SN*)malloc(sizeof(SN));

        printf("Name : ");
        scanf("%s",&newnode -> name);

        newnode -> next =0;

        //put node into the list
        if(head == 0)
        {
            head = temp = newnode;
        }else
        {
            temp -> next = newnode;
            temp = newnode;
        }
        printf("Enter 0 to exit or 1 to continue : ");
        scanf("%d",&choice);
    }
    //printing the node
    temp = head;
    while (temp != 0)
    {
        printf("Name : %s\n",&temp->name);
        temp = temp -> next;
    }
    
    

    


    return 0;
}