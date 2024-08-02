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
void printDLL(){
    node *temp=head;
    while(temp->nxt!=NULL){
        printf("|%d|",temp->data);
        temp=temp->nxt;
    }
    printf("|%d|",temp->data);
}
void addFirst(){
    node *newNode=createNode();
    if(head==NULL){
        head=newNode;
    }else{
        newNode->nxt=head;
        head->prev=newNode;
        head=newNode;
    }
}
int countNode(){
    node *temp=head;
    int count=0;
    while(temp!=NULL){
        count ++;
        temp=temp->nxt;
    }
    return count;
}
int addatPos(int pos){
    int count=countNode();
    if(pos<=0||pos>=count+2){
        printf("Invalid node position\n");
        return -1;
    }else{
        if(pos==count+1){
            addNode();
        }else if(pos==1){
            addFirst();
        }else{
            node *newNode=createNode();
            node *temp=head;
            while(pos-2){
                temp=temp->nxt;
                pos--;
            }
            newNode->nxt=temp->nxt;
            newNode->prev=temp;
            temp->nxt->prev=newNode;
            temp->nxt=newNode;
        }
        return 0;
    }
  }
void main(){
    int countNode;
    printf("Enter no of nodes:");
    scanf("%d",&countNode);

    for (int i=1;i<=countNode;i++){
        addNode();
    }
    printDLL();
    addFirst();
    printDLL();
    int pos;
    printf("Enter position:");
    scanf("%d",&pos);
    addatPos(pos);
    printDLL();


}
/*
Enter no of nodes:5
Enter Data:1
Enter Data:2
Enter Data:3
Enter Data:4
Enter Data:5
|1||2||3||4||5|Enter Data:0
|0||1||2||3||4||5|Enter position:7
Enter Data:6
|0||1||2||3||4||5||6|
*/