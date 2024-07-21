#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    int id;
    float ht;
    struct student *next;
}stud;

void main(){
    stud *head=NULL;
    stud *newNode=(stud*)malloc(sizeof(stud));
    newNode->id=1;
    newNode->ht=5.5;
    newNode->next=NULL;

    head=newNode;

    newNode=(stud*)malloc(sizeof(stud));
    newNode->id=2;
    newNode->ht=6.5;
    newNode->next=NULL;

    head->next=newNode;

    newNode=(stud*)malloc(sizeof(stud));
    newNode->id=3;
    newNode->ht=7.5;
    newNode->next=NULL;

    head->next->next=newNode;

    stud *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->id);
        printf("%f\n",temp->ht);
        temp=temp->next;
    }
}
/*
1
5.500000
2
6.500000
3
7.500000
*/
