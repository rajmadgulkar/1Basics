//All conditions handled
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
int countNode(){
        emp *temp=head;
        int count=0;
        while(temp!=NULL){
                temp=temp->next;
                count++;
        }
        return count;

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
        int count=countNode();
        if(pos<=0||pos>=count+2){
                printf("Invalid node position");
        }else if(pos==1){
                addFirst();
        }
        else if(pos==count+1){
                addNode();
        }else{
                emp *newNode=createNode();
                emp *temp=head;

        while(pos-2){
                temp=temp->next;
                pos--;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        }
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
void addLast(){
        emp *newNode=createNode();
        emp *temp=head;
        while(temp!=NULL){
                temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
}


void main(){
    int noofNode;
    printf("Enter no of nodes:");
    scanf("%d",&noofNode);

    for (int i=1; i<=noofNode;i++){
        addNode();
    }


    int pos;
    printf("Enter the position at which you want to enter a node:");
    scanf("%d",&pos);
    addatPos(pos);
    printLL();

    printf("Enter the position at which you want to enter a node:");
    scanf("%d",&pos);
    addatPos(pos);
    printLL();

    printf("Enter the position at which you want to enter a node:");
    scanf("%d",&pos);
    addatPos(pos);
    printLL();

    printf("Enter the position at which you want to enter a node:");
    scanf("%d",&pos);
    addatPos(pos);
    printLL();

    printf("Enter the position at which you want to enter a node:");
    scanf("%d",&pos);
    addatPos(pos);
    printLL();


}
/*  
Enter no of nodes:3
Enter Employee ID:1 
Enter Employee name:Raj
Enter Employee ID:2
Enter Employee name:Jay
Enter Employee ID:3
Enter Employee name:Sam
Enter the position at which you want to enter a node:4
Enter Employee ID:4
Enter Employee name:Krish
||1->Raj||||2->Jay||||3->Sam||||4->Krish||Enter the position at which you want to enter a node:0    
Invalid node position||1->Raj||||2->Jay||||3->Sam||||4->Krish||Enter the position at which you want to enter a node:1
Enter Employee ID:0
Enter Employee name:tan
||0->tan||||1->Raj||||2->Jay||||3->Sam||||4->Krish||Enter the position at which you want to enter a node:3
Enter Employee ID:3
Enter Employee name:yan
||0->tan||||1->Raj||||3->yan||||2->Jay||||3->Sam||||4->Krish||Enter the position at which you want to enter a node:9
Invalid node position||0->tan||||1->Raj||||3->yan||||2->Jay||||3->Sam||||4->Krish||
*/