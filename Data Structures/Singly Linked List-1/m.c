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
void deleteatPos(int pos){
        int count=countNode();

        if(pos==0||pos>=count+2){
                printf("Invalid node position");
        }else if(pos==1){
                deleteFirst();
        }else if(pos==count+1){
                deleteLast();
        }else{
                emp *temp=head;
                while(pos-2){
                        temp=temp->next;
                        pos--;
                }

                temp->next=temp->next->next;
                }
}
void main(){

    char choice;
    do{
    printf("Do you want to continue:\n");
    scanf("%c",&choice);

        printf("1.AddNode\n");
        printf("2.addfirst\n");
        printf("3.AddatPos\n");
        printf("4.deletefirst\n");
        printf("5.deleteatpos\n");
        printf("6.printLL\n");
    int ch;
    printf("Enter a choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    addNode();
        break;
    case 2:
    addFirst();
        break;
    case 3:
        {
    int pos;
    printf("Enter a node position you want to add:");
    scanf("%d",&pos);
    addatPos(pos);
        }
        break;
    case 4:
    deleteFirst();
    getchar();
        break;
     case 5:
        {
    int pos;
    printf("Enter a node position you want to delete:");
    scanf("%d",&pos);
    deleteatPos(pos);
        }
        break;
    case 6:
        printLL();
        getchar();
        break;
    default:
    printf("You entered a wrong choice!");
        break;
    }
}while (choice=='Y'||choice=='y');
}
/*
Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:1
Enter Employee ID:1
Enter Employee name:Raj
Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:1
Enter Employee ID:2
Enter Employee name:Ram
Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:1
Enter Employee ID:3
Enter Employee name:Sam
Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:6
||1->Raj||||2->Ram||||3->Sam||Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:2
Enter Employee ID:0
Enter Employee name:Krish
Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:3
Enter a node position you want to add:2
Enter Employee ID:4
Enter Employee name:Jack
Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:6
||0->Krish||||4->Jack||||1->Raj||||2->Ram||||3->Sam||Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:4
Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:6
||4->Jack||||1->Raj||||2->Ram||||3->Sam||Do you want to continue:
y
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:5
Enter a node position you want to delete:1
Do you want to continue:
1.AddNode
2.addfirst
3.AddatPos
4.deletefirst
5.deleteatpos
6.printLL
Enter a choice:6
||1->Raj||||2->Ram||||3->Sam||
  */