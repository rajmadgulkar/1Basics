#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node* createNode(){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->prev=NULL;
    printf("Enter data:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    return newNode;
}
int countNode(){
    int count;
    count=0;
    struct node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
        count++;
    }
    return count+1;
}
void addNode(){
    struct node *newNode=createNode();
    if(head==NULL){
        head=newNode;
        head->prev=head;
        head->next=head;
    }else{
        head->prev->next=newNode;
        newNode->next=head;
        newNode->prev=head->prev;
        head->prev=newNode;
    }
}
void addFirst(){
    struct node *newNode=createNode();
    head->prev->next=newNode;
    newNode->prev=head->prev;
    newNode->next=head;
    head->prev=newNode;
    head=newNode;

}
void printDCLL(){
    struct node *temp=head;
    while(temp->next!=head){
        printf("|%d|",temp->data);
        temp=temp->next;
    }
    printf("|%d|",temp->data);
}
int addatPos(int pos){
    int cnt=countNode();
    if(pos<=0||pos>cnt+1){
        printf("Invalid Input\n");
    }else{
        if(pos==1){
            addFirst();
        }else if(pos==cnt+1){
            addNode();
        }else{
            struct node *newNode=createNode();
            struct node *temp=head;
            while(pos-2){
                temp=temp->next;
                pos--;
            }
            newNode->next=temp->next;
            newNode->prev=temp;
            temp->next->prev=newNode;
            temp->next=newNode;
        }
    }
}
void deleteFirst(){
    if(head==NULL){
        printf("LinkedList is Empty\n");
    }else{
        if(head==NULL){
            free(head);
            head=NULL;
        }else{
            head=head->next;
            head->prev=head->prev->prev;
            free(head->prev->next);
            head->prev->next=head;
        }
    }
}
void deleteLast(){
    if(head==NULL){
        printf("Linked List is Empty");
    }else{
        head->prev=head->prev->prev;
        free(head->prev->next);
        head->prev->next=head;
    }
}
void deleteatPos(int pos){
    int cnt=countNode();
    if(pos<=0||pos>cnt){
        printf("Invalid position to delete a node");
    }else{
        if(pos==1){
            deleteFirst();
        }else if(pos==cnt){
            deleteLast();
        }else{
            struct node *temp=head;
            while(pos-2){
                temp=temp->next;
                pos--;
            }
            temp->next=temp->next->next;
            free(temp->next->prev);
            temp->next->prev=temp;
        }
    }
}
void main(){
    char choice;
    do{
        printf("1.addNode\n");
        printf("2.addFirst\n");
        printf("3.addAtPos\n");
        printf("4.delFirst\n");
        printf("5.delLast\n");
        printf("6.deleteAtPos\n");
        printf("7.printDCLL\n");

        int ch;
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            addNode();
            printDCLL();
            break;
            case 2:
            addFirst();
            printDCLL();
            break;
            case 3:
            {
                int pos;
                printf("Enter a position to add a node:");
                scanf("%d",&pos);
                addatPos(pos);
                printDCLL();
            }
            break;
            case 4:
            deleteFirst();
            printDCLL();
            break;
            case 5:
            deleteLast();
            printDCLL();
            break;
            case 6:
            {
                int pos;
                printf("Enter a position to delete a node:");
                scanf("%d",&pos);
                deleteatPos(pos);
                printDCLL();
            }
            break;
            case 7:
            printDCLL();
            break;
            default :
            printf("Wrong Choice\n");
        }
        getchar();
        printf("Do you want to continue");
        scanf("%c",&choice);
    }while(choice=='Y'||choice=='y');

}
/*1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
1
Enter data:10
|10|Do you want to continuey
1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
1
Enter data:20
|10||20|Do you want to continuey
1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
1
Enter data:30
|10||20||30|Do you want to continuey
1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
2
Enter data:5
|5||10||20||30|Do you want to continuey
1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
3
Enter a position to add a node:3
Enter data:15
|5||10||15||20||30|Do you want to continuey
1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
4
|10||15||20||30|Do you want to continuey
1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
5
|10||15||20|Do you want to continuey
1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
6
Enter a position to delete a node:2
|10||20|Do you want to continuey
1.addNode
2.addFirst
3.addAtPos
4.delFirst
5.delLast
6.deleteAtPos
7.printDCLL
Enter your choice
7
|10||20|Do you want to continuen
*/