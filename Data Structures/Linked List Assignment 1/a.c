#include<stdio.h>
#include<stdlib.h>

typedef struct Mall{
    char mName[20];
    int noofShp;
    float rev;
    struct Mall *next;
}mall;



void main(){
    mall *head=NULL;

    mall *newNode=(mall*)sizeof(mall);
    printf("Enter name of the Mall");
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newNode).mName[i]=ch;
    }
    getchar();
    printf("Enter no of Shops in a Mall");
    scanf("%d",&newNode->noofShp);
    printf("Enter total mall revenue");
    scanf("%f",newNode->rev);
    newNode->next=NULL;

    head=newNode;

    newNode=(mall*)malloc(sizeof(mall));
    printf("Enter name of the mall");
    char ch1;
    int i1=0;
    while((ch1=getchar())!='\n'){
        (*newNode).mName[i1]=ch1;
    }
    getchar();
    printf("Enter no of Shops in a Mall");
    scanf("%d",&newNode->noofShp);
    printf("Enter total mall revenue");
    scanf("%f",&newNode->rev);
    newNode->next=NULL;

    head->next=newNode;

    newNode=(mall*)malloc(sizeof(mall));
    printf("Enter no of Shops in a Mall");
    char ch2;
    int i2=0;
    while ((ch2=getchar())!='\n'){
        (*newNode).mName[i2]=ch2;
    }
    getchar();
    printf("Enter no of Shops in a Mall");  
    scanf("%d",&newNode->noofShp);
    printf("Enter total mall revenue");
    scanf("%f",&newNode->rev);
    newNode->next=NULL;

    head->next->next=newNode;


    mall *temp=head;
    while(temp!=NULL){
        printf("%s\n",newNode->mName);
        printf("%d\n",newNode->noofShp);
        printf("%f\n",newNode->rev);
        temp=temp->next;
    }


}