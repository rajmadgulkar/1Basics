#include<stdio.h>
#include<stdlib.h>
typedef struct Employee{
    int id;
    char eName[20];
    struct Employee *next;
}emp;

emp *head=NULL;
emp* createNode(){
    emp *newNode=(emp*)malloc(sizeof(emp));
    printf("Enter Employee ID:");
    scanf("%d",&newNode->id);
    getchar();
    printf("Enter Employee name:");
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newNode).eName[i]=ch;
        i++;
    }
    newNode->next=NULL;
    return newNode;
}
void addNode(){
    emp *newNode=createNode();
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
    emp *temp=head;
    while(temp!=NULL){
        printf("||%d->",temp->id);
        printf("%s||",temp->eName);
        temp=temp->next;
    }
}

void addFirst(){
        emp *newNode=createNode();
        if(head==NULL){
                head==newNode;
        }else{
        newNode->next=head;
        head=newNode;
        }
}
void addatPos(int pos){
        emp *newNode=createNode();
        emp *temp=head;

        while(pos-2){
                temp=temp->next;
                pos--;
        }
        newNode->next=temp->next;
        temp->next=newNode;
}

void deleteFirst(){
        emp *temp=head;
        head=temp->next;
        free(temp);
}

void deleteLast(){
        emp *temp=head;
        while(temp->next->next!=NULL){
                temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
}

void main(){
    int noofNode;
    printf("Enter no of nodes:");
    scanf("%d",&noofNode);

    for (int i=1; i<=noofNode;i++){
        addNode();
    }

    printLL();
    countNode();
    addFirst();
    printLL();
    int pos;
    printf("Enter the position at which you want to enter a node:");
    scanf("%d",&pos);
    addatPos(pos);
    printLL();



    deleteFirst();
    printLL();

    deleteLast();
    printLL();



}
/*
Enter no of nodes:3
Enter Employee ID:10
Enter Employee name:raj
Enter Employee ID:11
Enter Employee name:jay
Enter Employee ID:12
Enter Employee name:sam
||10->raj||||11->jay||||12->sam||3
Enter Employee ID:9
Enter Employee name:krish
||9->krish||||10->raj||||11->jay||||12->sam||Enter the position at which you want to enter a node:5 
Enter Employee ID:13
Enter Employee name:ram
||9->krish||||10->raj||||11->jay||||12->sam||||13->ram||||10->raj||||11->jay||||12->sam||||13->ram||||10->raj||||11->jay||||12->sam||
*/