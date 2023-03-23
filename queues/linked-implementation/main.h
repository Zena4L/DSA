#ifndef MAIN_H
#define MAIN_h

#include <stdio.h>
#include <stdlib.h>



typedef struct node{
    int data;
    struct node *link;
} SN;

SN *front,*rear;

void insert();
void delet();
void display();

#endif
