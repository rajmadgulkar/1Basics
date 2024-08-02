
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
        struct Node *prev;
        int data;
        struct Node *nxt;
}node;
node *head=NULL;
node* createNode(){

        node *newNode=(node*)malloc(sizeof(node));
        newNode->prev=NULL;
        printf("Enter Data:");
        scanf("%d",&newNode->data);
        newNode->nxt=NULL;
        return newNode;
}
void addNode(){
        node *newNode=createNode();
        if(head==NULL){
                head=newNode;
        }else{
                node *temp=head;
                while(temp->nxt!=NULL){
                        temp=temp->nxt;
                }
                temp->nxt=newNode;
                newNode->prev=temp;
        }
}
void printLL(){
        node *temp=head;
        while(temp->nxt!=NULL){
                printf("|%d|",temp->data);
                temp=temp->nxt;
        }
        printf("|%d|",temp->data);
}



void main(){

        int countNode;
        printf("Enter no of nodes:");
        scanf("%d",&countNode);
        for (int i=1;i<=countNode;i++){
                addNode();

        }
        printLL();

}

/*
Enter no of nodes:3
Enter Data:10
Enter Data:20
Enter Data:30
|10||20||30|
*/
