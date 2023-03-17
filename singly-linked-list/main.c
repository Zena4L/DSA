#include "singly.h"

/**
 * @d - Linked List in C: Menu Driven Program
 * @ beginsert() - insert a node at the beginning
 * @ insertlast() - insert at the end of the  node
 * @ insertrandom() -  insert at a given position
 * @ delbegin() - delete node at the beginning
 * @ dellast() - delete last node
 * @ delrandom() - delete at a given position
 * @ search() - search for item
 * @ display() - display all items
*/

int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\nChoose one option from the following list ...\n");
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice); 
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            insertlast();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            delbegin();
            break;
        case 5:
            dellast();
        case 6:
            delrandom();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        
        default:
            printf("Please enter valid choice.."); 
            
        }
    }
    return 0;
}

void beginsert()
{
    // create a newnode and a item
    SN *newnode;
    int item;

    newnode = (SN*)malloc(sizeof(SN));

    // check if node is not empty
    if(newnode == NULL)
    {
        printf("\nOVERFLOW");
    }else
    {
        // ask user for input
        printf("\nEnter item : \n");
        scanf("%d",&item);
        // put item in the newnode
        newnode->data = item;
        // point next to the head
        newnode->next = head;
        head = newnode;
        printf("\nNode inserted");
    }
}
void insertlast()
{
    SN *ptr,*temp;  
    int item;     
    ptr = (SN*)malloc(sizeof(SN));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
          
        }  
    }  
}

void randominsert()
{
    int i,loc,item ; // i for loop and loc for position
    SN *newnode,*temp;
    newnode = (SN*)malloc(sizeof(SN));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW");
    }else
    {
        printf("\n Enter Item : \n");
        scanf("%d",&item);
        newnode->data = item;

        printf("\n Enter position to insert : \n");
        scanf("d",&loc);
        temp = head;
        for(i=0; i<loc;i++){
            temp = temp ->next;
            if(temp == NULL)
            {
                printf("\n Can't insert here\n "); //end of the node
                return;
            }
        }
        newnode->next = temp->next;
        temp->next = newnode;
        printf("\nNode inserted"); 
    }
}
void delbegin()
{
    SN* delnode;
    if(head == NULL){
        printf("\nList is Empty\n");
    }else
    {
        delnode = head;
        head = delnode->next;
        free(delnode);
        printf("\nNode deleted from the begining ...\n"); 
    }
}
void dellast()
{
    SN *delnode,*temp;
    if(head == NULL){
        printf("\nEmpty List \n");
    }else if(head->next == NULL)
    {
        //meaning only one element in the list
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");  
    }else
    {
        delnode = head;
        while (delnode->next != NULL) //whiles not last
        {
            temp = delnode;
            delnode  = delnode->next; 
        }
        temp->next=NULL; //end of list
        free(delnode);
        printf("\nDeleted Node from the last ...\n"); 
        
    }
}
void delrandom()
{
    SN *delnode,*temp;
    int i,loc;
    printf("\n Enter the location of the node after which you want to perform deletion \n"); 
    scanf("%d",&loc);
    delnode = head;
    
    for(i=0;i<loc;i++)
    {
        temp = delnode;
        delnode = delnode->next;
        if(delnode == NULL)
        {
            printf("\nCan't delete"); 
            return; 
        }
    }
    temp->next = delnode->next;
    free(delnode);
    printf("\nDeleted node %d ",loc+1);
}
void search()
{
    SN* ptr;
    int i = 0,item,flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List\n");
    }else
    {
        printf("\nEnter item which you want to search?\n");  
        scanf("%d",&item);
        while (ptr != NULL)
        {
            if(ptr->data == item)
            {
                printf("item found at location %d ",i+1);
                flag = 0;
            }else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;

        }
        if(flag == 1){
            printf("Item not found\n"); 
        }

        
    }
}
void display()
{
    SN *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }
}