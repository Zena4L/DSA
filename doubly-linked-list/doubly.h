#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} SN;

SN* head;


void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletion_beginning(); 
void deletion_last(); 
void deletion_specified();
void display();
void search();