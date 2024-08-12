#include<stdio.h>
#include<stdlib.h>
typedef struct Movie{
        int noofP;
        char mName[20];
        struct Movie *next;
}mov;
mov *head=NULL;
mov* createNode(){
        mov *newNode=(mov*)malloc(sizeof(mov));
        getchar();
        printf("Enter movie name:");
        char ch;
        int i=0;
        while((ch=getchar())!='\n'){
                (*newNode).mName[i]=ch;
                i++;
        }
        printf("Enter no of Persons:");
        scanf("%d",&newNode->noofP);
        newNode->next=NULL;
        return newNode;
}
int addNode(){
        mov *newNode=createNode();
        if(head==NULL){
                head=newNode;
                newNode->next=head;
        }else{
                mov *temp=head;
                while(temp->next!=head){
                        temp=temp->next;
                }
                temp->next=newNode;
                newNode->next=head;
        }
        return 0;

}
int printSCLL(){
    if(head==NULL){
        printf("Invalid Node position");
        return -1;
    }else{
        mov *temp=head;
        while(temp->next!=head){
                printf("|%s|->",temp->mName);
                printf("%d|",temp->noofP);
                temp=temp->next;
        }
        printf("|%s|->%d|",temp->mName,temp->noofP);
    }
        return 0;
}
int countNode(){
        int count=0;
        mov *temp=head;
        while(temp->next!=head){
                count++;
                temp=temp->next;
        }
        return count+1;

}
int addFirst(){
        mov *newNode=createNode();
        if(head==NULL){
                head=newNode;
                newNode->next=head;
        }else{
                mov *temp=head;
                while(temp->next!=head){
                        temp=temp->next;
                }
                temp->next=newNode;
                newNode->next=head;
                head=newNode;
        }
        return 0;
}
int addatPos(int pos){
        int cnt=countNode();
        if(pos<=0||pos>=cnt+2){
                printf("Invalid position to add");
        }else if(head==NULL){
                addFirst();
        }else if(pos==cnt+1){
                addNode();
        }else{
                mov *newNode=createNode();
                mov *temp=head;
                while(pos-2){
                        temp=temp->next;
                        pos--;
                }
                newNode->next=temp->next;
                temp->next=newNode;
        }
        return 0;

}
int deleteFirst(){
        if(head==NULL){
                printf("Empty Linked List");
                return -1;
        }else{
                if(head->next==head){
                        free(head);
                        head=NULL;
                }else{
                        mov *temp=head;
                        while(temp->next!=head){
                                temp=temp->next;
                        }
                        free(temp->next);
                        head=head->next;
                        temp->next=head;
                }
                return 0;
        }
}

int deleteLast(){
        if(head==NULL){
                printf("Empty Linked List");
                return -1;
        }else{
                if(head->next==head){
                        free(head);
                        head==NULL;
                }else{
                        mov *temp=head;
                        while(temp->next->next!=head){
                                temp=temp->next;
                        }
                        free(temp->next);
                        temp->next=head;
                }
        }
        return 0;
}
int deleteatPos(int pos){
        int cnt=countNode();
        if(pos<=0||pos>=cnt+2){
                printf("Invalid position to delete");
                return -1;
        }else if(pos==1){
                deleteFirst();
                return 0;
        }else if(pos==cnt+1){
                deleteLast();
                return 0;
        }else{
                mov *temp=head;
                while(pos-2){
                        temp=temp->next;
                        pos--;
                }
                mov *temp2=temp->next;
                temp->next=temp->next->next;
                free(temp2);
        }
        return 0;
}
int main(){
        int noofNodes;
        printf("Enter no of node:");
        scanf("%d",&noofNodes);

        for(int i=1;i<=noofNodes;i++){
                addNode();
        }
        printSCLL();

        int pos;
        printf("Enter a position to delete");
        scanf("%d",&pos);
        deleteatPos(pos);
        printSCLL();
        return 0;
}
/*
Enter no of Persons:3
Enter movie name:Kill
Enter no of Persons:2
Enter movie name:Fandry
Enter no of Persons:4
Enter movie name:Bahubali
Enter no of Persons:6
|Kantara|->3||Kill(|->2||Fandryc|->4||Bahubali4|->6|Enter a position to delete2
|Kantara|->3||Fandryc|->4||Bahubali4|->6|
*/