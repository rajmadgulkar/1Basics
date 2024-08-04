#include<stdio.h>
#include<stdlib.h>
typedef struct Employee{
    char eName[20];
    int id;
    struct Employee *next;
}emp;
emp *head=NULL;
void addNode(){
    emp *newNode=(emp*)malloc(sizeof(emp));
    getchar();
    printf("Enter name of the employee:");
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newNode).eName[i]=ch;
        i++;
    }
    printf("Enter employee Id:");
    scanf("%d",&newNode->id);
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }else{
        emp *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

}
void nodecount(){
    emp *temp=head;
    int count=0;
    while(temp!=NULL){

        temp=temp->next;
        count++;
    }
    printf("Nodecount:%d",count);

}
void printLL(){
    emp *temp=head;
    while(temp!=NULL){

        printf("||%s->",temp->eName);
        printf("%d||",temp->id);

        temp=temp->next;
    }
}
void main(){
    int countNode;
    printf("Enter no of nodes:");
    scanf("%d",&countNode);
    for (int i=1;i<=countNode;i++){
        addNode();
    }

    printLL();
    nodecount();
}
                    