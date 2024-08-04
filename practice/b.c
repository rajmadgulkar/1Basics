#include<stdio.h>
#include<stdlib.h>
typedef struct Employee{
    int id;
    char eName[20];
    struct Employee *next;
}emp;

emp *head=NULL;
void addNode(){
    emp *newNode=(emp*)malloc(sizeof(emp));
    getchar();
    printf("Enter Employee ID:");
    scanf("%d",&newNode->id);
    printf("Enter Employee name:");
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newNode).eName[i]=ch;
        i++;
    }
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
void countNode(){
        emp *temp=head;
        int count=0;
        while(temp!=NULL){
                temp=temp->next;
                count++;
        }
        printf("%d\n",count);

}
void printLL(){
    emp *temp=NULL;
    while(temp!=NULL){
        printf("||%d",temp->id);
        printf("%s||",temp->eName);
        temp=temp->next;
    }
}
void main(){
    int noofNode;
    printf("Enter no of nodes:");
    scanf("%d",&noofNode);

    for (int i=0; i<=noofNode;i++){
        addNode();
    }

    printLL();
    countNode();
}