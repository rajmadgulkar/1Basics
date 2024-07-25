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
    printf("Enter Employee Name:");
    getchar();
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newNode).eName[i]=ch;
        i++;
    }
    printf("Enter ID:");
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
void printLL(){
    emp *temp=head;
    while(temp!=NULL){
        printf("|%s->",temp->eName);
        printf("%d|",temp->id);
        temp=temp->next;
                printf("%d|",temp->id);
        temp=temp->next;
    }
}
void countNode(){

    emp*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("\ncount =%d\n",count);
}
void main(){
    int nodeCount;
    printf("Enter nodecount:");
    scanf("%d",&nodeCount);
    for(int i=1;i<=nodeCount;i++){
        addNode();
    }
    printLL();
    countNode();

}
/*
Enter nodecount:3
Enter Employee Name:Raj
Enter ID:1
Enter Employee Name:Jay
Enter ID:2
Enter Employee Name:Tushar
Enter ID:3
|Raj->1||Jay->2||Tushar->3|
count =3
*/