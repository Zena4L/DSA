#include<stdio.h>  
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} SN;
SN *head;

void beginsert();
void insertlast();
void randominsert();
void delbegin();
void dellast();
void delrandom();
void search();
void display();