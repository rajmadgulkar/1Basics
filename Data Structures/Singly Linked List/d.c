#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void main(){
    struct node *head=NULL;
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=10;
    newNode->next=NULL;
    head=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=20;
    newNode->next=NULL;
    head->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=30;
    newNode->next=NULL;
    head->next->next=newNode;//Formation of Linked List code.

    
    
}
