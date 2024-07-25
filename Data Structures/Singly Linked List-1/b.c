#include<stdio.h>
#include<stdlib.h>
typedef struct Student{
        int id;
        float ht;
        struct Student *next;
}stud;

stud* addNode(stud *head){
        stud *newNode=(stud*)malloc(sizeof(stud));
        newNode->id=1;
        newNode->ht=5.5;
        newNode->next=NULL;


        head =newNode;
        return head;
}

void printLL(stud *head){
        stud *temp=head;
        while(temp!=NULL){
                printf("%d\n",temp->id);
                printf("%f\n",temp->ht);
                temp=temp->next;
        }
}
void main(){
        stud *head=NULL;
        head=addNode(head);
        printLL(head);
}
/*
1
5.500000
*/
