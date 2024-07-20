#include<stdio.h>
#include<string.h>

typedef struct Company{
    int empCount;
    char name[20];
    float rev;
    struct Company *nxt;
}comp;
void main(){
    comp obj1, obj2, obj3;
    
    comp *head=&obj1;

    head->empCount=50;
    strcpy(head->name,"Core2Web");
    head->rev=22.56;

    obj1.nxt=&obj2;

    obj1.nxt->empCount=10;
    strcpy(obj1.nxt->name,"TATA");
    obj1.nxt->rev=50.00;

    obj2.nxt=&obj3;

    obj2.nxt->empCount=80;
    strcpy(obj2.nxt->name,"Infosys");
    obj2.nxt->rev=75.00;

    obj3.nxt=NULL;

    printf("%d\n",head->empCount);
    printf("%s\n",head->name);
    printf("%f\n",head->rev);

    printf("%d\n",obj1.nxt->empCount);
    printf("%s\n",obj1.nxt->name);
    printf("%f\n",obj1.nxt->rev);

    printf("%d\n",obj2.nxt->empCount);
    printf("%s\n",obj2.nxt->name);
    printf("%f\n",obj2.nxt->rev);



}
/*
50
Core2Web
22.559999
10
TATA
50.000000
80
Infosys
75.000000
*/