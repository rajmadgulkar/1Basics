#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node* createNode(){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    
    newNode->prev=NULL;
    printf("Enter Data:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;

    return newNode;

}
void addNode(){
    struct node *newNode=createNode();
    if(head==NULL){
        head=newNode;
    }else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
}
void printDLL(){
    struct node *temp=head;
    while(temp->next!=NULL){

        printf("|%d|->",temp->data);
        temp=temp->next;
    }
    printf("|%d|",temp->data);    
}
void addFirst(){
    struct node *newNode=createNode();
    if(head==NULL){
        head=newNode;
    }else{
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
    }
}
int countNode(){
    int count=0;
    struct node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
void addatPos(int pos){
    int cnt =countNode();

    if(pos<=0||pos>cnt+2){
        printf("Invalid node Position");
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
        newNode->prev=temp;
        temp->next=newNode;
        temp->next->prev=newNode;
    }
}
void deleteFirst(){
    int cnt=countNode();
    if(head==NULL){
        printf("Nothing to delete\n");
    }else{
        head=head->next;
        free(head->prev);
        head->prev=NULL;
        }
}
void deleteLast(){
    int cnt=countNode();
    if(head==NULL){
        printf("Linked List is Empty\n");
}else{
 if(cnt==0){
    free(head);
    head=NULL;
 }else{
    struct node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
 }

}
}
void deleteatPos(int pos){
    int cnt=countNode();
    if(pos<=0||pos>=cnt+2){
        printf("invalid node position");
    }else if(pos==1){
        deleteFirst();
    }else if(pos==cnt+1){
        deleteLast();
    }else{
        struct node  *temp=head;
        while(pos-2){
            temp=temp->next;
            pos--;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }

}

void main(){
    int noofNodes;
    printf("Enter no of nodes:");
    scanf("%d",&noofNodes);

    for(int i=1; i<=noofNodes;i++){
        addNode();
    }
    printDLL();
 
    addFirst();
    printDLL();
    
    int pos;
    printf("Enter a position you want to enter a node:");
    scanf("%d",&pos);

    addatPos(pos);
    printDLL();

    deleteFirst();
    printDLL();

    deleteLast();
    printDLL();


    
    printf("Enter a position you want to delete a node:");
    scanf("%d",&pos);
    deleteatPos(pos);
    printDLL();
}
/*
Enter no of nodes:3
Enter Data:10
Enter Data:20
Enter Data:30
|10|->|20|->|30|Enter Data:5
|5|->|10|->|20|->|30|Enter a position you want to enter a node:3
Enter Data:15
|5|->|10|->|15|->|20|->|30||10|->|15|->|20|->|30||10|->|15|->|20|Enter a position you want to delete a node:2
|10|->|20|
*/