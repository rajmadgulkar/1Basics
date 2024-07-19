#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct OTT{
        char pName[20];
        int userCount;
        float price;
};
void main(){
        struct OTT *ptr1=(struct OTT*)malloc(sizeof(struct OTT));
        strcpy(ptr1->pName,"Prime Video");
        ptr1->userCount=100000;
        ptr1->price=350.50;

        printf("%s\n",ptr1->pName);
        printf("%d\n",ptr1->userCount);
        printf("%f\n",ptr1->price);

        struct OTT *ptr2=(struct OTT*)malloc(sizeof(struct OTT));
        strcpy(ptr2->pName,"Netflix");
        ptr2->userCount=50000;
        ptr2->price=500.50;

        printf("%s\n",ptr2->pName);
        printf("%d\n",ptr2->userCount);
        printf("%f\n",ptr2->price);
}
/*
Prime Video
100000
350.500000
Netflix
50000
500.500000
*/