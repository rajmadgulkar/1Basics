#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct company{
        char cName[20];
        int empCount;
        float revenue;
};
void main(){
        struct company *ptr1=(struct company*)malloc(sizeof(struct company));
        strcpy(ptr1->cName,"Veritas");
        ptr1->empCount=500;
        ptr1->revenue=45.50f;

        printf("%s\n",ptr1->cName);
        printf("%d\n",ptr1->empCount);
        printf("%f\n",ptr1->revenue);
}
/*
Veritas
500
45.500000
*/