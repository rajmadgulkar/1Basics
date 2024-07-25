//Declaring head gobally
#include<stdio.h>
#include<stdlib.h>
typedef struct Student{
        int id;
        float ht;
        struct Student *next;
}stud;
stud *head=NULL;

stud* addNode(){
        stud *newNode=(stud*)malloc(sizeof(stud));
        newNode->id=1;
        newNode->ht=5.5;
        newNode->next=NULL;


        head =newNode;
        return head;
}

void printLL(){
        stud *temp=head;
        while(temp!=NULL){
                printf("%d\n",temp->id);
                printf("%f\n",temp->ht);
                temp=temp->next;
        }
}
void main(){
        
        addNode();
        printLL();
}
/*
1
5.500000
*/