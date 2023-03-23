#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node *next;
} SN;

SN *head;

void push();
void pop();
void display();
#endif