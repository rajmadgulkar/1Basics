#include<stdio.h>
#include<stdlib.h>
typedef struct Employee{
    char eName[20];
    int id;
    struct Employee *next;
}emp;
emp *head=NULL;
emp* createNode(){
    emp *newNode=(emp*)malloc(sizeof(emp));

    printf("Enter Name:");
    getchar();
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newNode).eName[i]=ch;
    }
    printf("Enter ID:");
    scanf("%d",&newNode->id);
    newNode->next=NULL;
    return newNode;
}
void addNode(){
    emp *newNode=createNode();
    if (head==NULL){
        head=newNode;
    }else{
        emp *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void printLL(){
    emp *temp=head;
    while(temp!=NULL){
        printf("|%s",temp->eName);
        printf("%d||",temp->id);
    }
}
void countNode(){
    emp *temp=head;
    int count=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    printf("%d\n",count);
}
void addFirst(){
    emp *newNode=createNode;
    if(head=NULL){
        head=newNode;
    }else{
        newNode->next=head;
        head=newNode;
    }
}
void main(){
    int nodeCount;
    printf("Enter node count:");
    scanf("%d",&nodeCount);
    for(int i=1; i<=nodeCount;i++){
        addNode();
    }
    printLL();

}