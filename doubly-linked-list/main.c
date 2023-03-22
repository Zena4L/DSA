#include "doubly.h"


int main(void)
{
    int choice =0;  
    while(choice != 9)  
    {  
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                insertion_beginning();  
                break;  
            case 2:  
                insertion_last();  
                break;  
            case 3:  
                insertion_specified();  
                break;  
            case 4:  
                deletion_beginning();  
                break;  
            case 5:  
                deletion_last();  
                break;  
            case 6:  
                deletion_specified();  
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

void insertion_beginning()
{
    SN *newnode;
    int item;
    newnode = (SN*)malloc(sizeof(SN));

    if(newnode == NULL)
    {
        printf("\nOverflow");
    }else
    {
        printf("\nEnter item value: ");
        scanf("%d",&item);
        if(head == NULL)
        {
            newnode->next = NULL;
            newnode->prev = NULL;
            newnode->data = item;
            head = newnode;
        }else{
            newnode->data = item;
            newnode->prev = NULL;
            newnode->next= head;
            head->prev = newnode;
            head = newnode;
        }
        printf("\nNode inserted at beginning...");
    }
}
void insertion_last()
{
    SN *newnode,*temp;
    int item;
    newnode = (SN*)malloc(sizeof(SN));
    if(newnode == NULL)
    {
        printf("\nOverflow");
    }else{
        printf("\nEnter item value: ");
        scanf("%d",&item);
        newnode->data = item;

        if(head == NULL)
        {
            newnode->next = NULL;
            newnode->prev = NULL;
            head = newnode;
        }else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
            newnode->next = NULL;
                        
        }
    }
    printf("\nnode inserted\n");
}
void insertion_specified()
{
    SN *newnode,*temp;
    int i=0,loc,item;
    newnode = (SN*)malloc(sizeof(SN));
    if(newnode == NULL)
    {
        printf("\nOverflow");
    }else{
        temp = head;
        printf("\nEnter the location: ");
        scanf("%d",&loc);

        for(i;i<loc;i++)
        {
            temp=temp->next;
            if(temp == NULL)
            {
                printf("\nitem can't be inserted here");
                return;
            }
        }
        printf("Enter item value: ");
        scanf("%d",&item);

        newnode->data = item;
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
        printf("\nnode inserted\n");
    }
}
void deletion_beginning()
{
    SN* delnode;
    if(head == NULL){
        printf("\nEmpty list");
    }else if(head->next = NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted");
    }else{
        delnode = head;
        head = head->next;
        head->prev = NULL;
        free(delnode);
        printf("\nNode deleted");
    }
}
void deletion_last()
{
    SN* delnode;
    if(head == NULL)
    {
        printf("\nEmpty list");
        
    }else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted");
    }else
    {
        delnode = head;
        if(delnode->next != NULL)
        {
            delnode = delnode->next;
        }
        delnode->prev->next = NULL;\
        free(delnode);
        printf("\nNode deleted");
    }
}
void deletion_specified()
{
    SN* delnode,*temp;
    int val;
    printf("\nEnter value to delete: ");
    scanf("%d",&val);
    delnode = head;
    while (delnode->data != val)
    {
        delnode = delnode->next;
    }
    if(delnode->next == NULL)
    {
        printf("\nCan't delete ");
    }else if(delnode->next->next == NULL)
    {
        delnode->next = NULL;
    }else{
        temp = delnode->next;
        delnode->next = temp->next;
        temp->next->prev = delnode;
        free(temp);
        printf("\nnode deleted\n");  
    }
    
}
void display()
{
    SN* ptr;
    printf("\nPrinting values ... \n");
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
 
}
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("\nitem found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nItem not found\n");  
        }  
    }     
          
}  