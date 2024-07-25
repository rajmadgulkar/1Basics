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
        printf("Enter name:");
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
                head =newNode;
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
        }


}
void main(){
        int nodeCount=0;
        printf("Enter node count:");
        scanf("%d",&nodeCount);
        for (int i=0;i<=nodeCount;i++){
                addNode();
        }
        printLL();

}    
/*
Enter node count:2
Enter name:Raj
Enter ID:1
Enter name:Jay
Enter ID:2
Enter name:Tushar
Enter ID:3
|Raj->1||Jay->2||Tushar->3|
*/