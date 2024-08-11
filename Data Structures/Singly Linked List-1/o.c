#include<stdio.h>
#include<stdlib.h>
typedef struct cricPlayer{
    int jerNo;
    char pname[20];
    struct cricPlayer *next;
}cric;

cric *head=NULL;

cric* createNode(){
    cric *newNode=(cric*)malloc(sizeof(cric));
    printf("Enter jersey no:");
    scanf("%d",&newNode->jerNo);
    getchar();
    printf("Enter player name:");
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newNode).pname[i]=ch;
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
        printf("|%d|->",temp->jerNo);
        printf("%s|",temp->pname);
        temp=temp->next;

    }
}
void addFirst(){
    cric *newNode=createNode();
    if(head==NULL){
    head=newNode;
    }else{
        newNode->next=head;
        head=newNode;
    }

}
int countNode(){
    int count;
    count=0;
    cric *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
int addatPos(int pos){
    int cnt=countNode();
    if(pos<=0||pos>=cnt+2){
        printf("Invalid node position\n");
        return -1;
    }else if(pos==cnt+1){
        addNode();
        return 0;
    }else if(pos==1){
        addFirst();
        return 0;
    }else{
        cric *newNode=createNode();
        cric *temp=head;
        while(pos-2){
            temp=temp->next;
            pos--;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return 0;
}
void deleteFirst(){
    cric *temp=head;
    head=head->next;
    free(temp);

}
void deleteLast(){
    cric *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}
void deleteatPos( int pos){
    int cnt=countNode();

    if(pos<=0||pos>=cnt+1){
        printf("Invalid node position for delete operation\n");
    }else if(pos==1){
        deleteFirst();
    }else if(pos==cnt){
        deleteLast();
    }else{
        cric *temp=head;
        while(pos-2){
            temp=temp->next;
            pos--;
        }
        temp->next=temp->next->next;
        free(temp->next->next);

    }



}
void main(){
    int noofNodes;
    printf("Enter no of nodes:");
    scanf("%d",&noofNodes);

    for(int i=1;i<=noofNodes;i++){
        addNode();
    }
    printSLL();
    int pos;
    addFirst();
    printSLL();

    printf("Enter a position:");
    scanf("%d",&pos);
    addatPos(pos);

    printSLL();

    deleteFirst();
    printSLL();


    printf("Enter a position to delete:");
    scanf("%d",&pos);
    deleteatPos(pos);

    printSLL();


}
/*
Enter no of nodes:3
Enter jersey no:1
Enter player name:raj
Enter jersey no:2
Enter player name:sam
Enter jersey no:3
Enter player name:jay
|1|->raj||2|->sam||3|->jay|Enter jersey no:0
Enter player name:krish
|0|->krish||1|->raj||2|->sam||3|->jay|Enter a position:5
Enter jersey no:4
Enter player name:ram
|0|->krish||1|->raj||2|->sam||3|->jay||4|->ram||1|->raj||2|->sam||3|->jay||4|->ram|Enter a position to delete:4
|1|->raj||2|->sam||3|->jay|
*/