#include<stdio.h>
#include<stdlib.h>

typedef struct cricPlayer{
    int jerNo;
    char pName[20];
    struct cricPlayer *next;
}cric;

cric *head =NULL;

cric* createNode(){

    cric *newNode=(cric*)malloc(sizeof(cric));
    printf("Enter jersey no:");
    scanf("%d",newNode->jerNo);
    getchar();
    printf("Enter player's name:");
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newNode).pName[i]=ch;
        i++;
    }
    newNode->next=NULL;
    return newNode;
}
void addNode(){
    cric *newNode=createNode();
    if(head==NULL){
        head=newNode;
    }else{
        cric *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void printSLL(){
    cric *temp=head;
    while(temp!=NULL){
        printf("|%d->",temp->jerNo);
        printf("%s|",temp->pName);
        temp=temp->next;
    }
}

int countNode(){
    
}

void main(){
    int noofnodes;
    printf("Enter no of nodes you want to enter:");
    scanf("%d",&noofnodes);

    for(int i=1;i<=noofnodes;i++){
        addNode();
    }
    printSLL();
    
}