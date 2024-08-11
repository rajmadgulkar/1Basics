#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

struct node* createNode(){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    return newNode;
}
void addNode(){
    struct node *newNode=createNode();

    if(head==NULL){
        head=newNode;
        newNode->next=head;
    }else{
        struct node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
}
void printSCLL(){
    struct node *temp=head;
    while(temp->next!=head){
        printf("|%d|",temp->data);
        temp=temp->next;
    }
    printf("|%d|",temp->data);
}
void addFirst(){
    struct node *newNode=createNode();
    if(head==NULL){
        head=newNode;
        newNode->next=head;
    }else{
        struct node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        newNode->next=head;
        temp->next=newNode;
        head=newNode;
    }
}
int countNode(){
    int count=0;
    struct node *temp=head;
    do{
        count++;
        temp = temp->next;
    } while (temp!=head);
    
    return count;
}
void addatPos(int pos){
    int cnt=countNode();
    printf("%d",cnt);
    if(pos<=0||pos>=cnt+2){
        printf("Invalid node position");
    }else if(pos==1){
        addFirst();
    }else if(pos==cnt+1){
        addNode();
    }else{
        struct node *newNode=createNode();
        struct node *temp=head;
        while(pos-2){
            temp=temp->next;
            pos--;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        
    }



}
void main(){
    int noofNodes;
    printf("Enter no of Nodes:");
    scanf("%d",&noofNodes);

    for(int i=1;i<=noofNodes;i++){
        addNode();
    }
    printSCLL();
    int pos;
    printf("Enter a Position to add Node:");
    scanf("%d",&pos);
    addatPos(pos);
    printSCLL();
}
/*
Enter no of Nodes:3
Enter Data:10
Enter Data:20
Enter Data:30
|10||20||30|Enter a Position to add Node:4
3Enter Data:40
|10||20||30||40|
*/