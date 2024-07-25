//User Input
#include<stdio.h>
#include<stdlib.h>
typedef struct Movie{
    char mName[20];
    float imdb;
    struct Movie *next;
}mov;
mov *head=NULL;
void addNode(){
    getchar();
    mov *newNode=(mov*)malloc(sizeof(mov));
    printf("Enter Movie name\n");
    fgets(newNode->mName,20,stdin);

    printf("Enter IMDB rating\n");
    scanf("%f",&newNode->imdb);

    newNode->next=NULL;
    if (head==NULL){
        head =newNode;
    }else{
        mov *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void printLL(){
    mov *temp=head;
    while(temp!=NULL){
        printf("|%s->",temp->mName);
        printf("%f||",temp->imdb);
        temp=temp->next;
    }
}

void main(){
    addNode();
    printLL();
    addNode();
    printLL();
}
/*


Enter Movie name
kantara
Enter IMDB rating
8.9
|kantara
->8.900000||Enter Movie name
Kill
Enter IMDB rating
9.6
|kantara
->8.900000|||Kill
->9.600000||
*/