#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct college{
        char cName[20];
        int roomNo;
        float NAACrate;
};
void main(){
        struct college *cptr=(struct college*)malloc(sizeof(struct college));
        strcpy(cptr->cName,"MES Wadia College");
        cptr->roomNo=521;
        cptr->NAACrate=8.8;

        printf("%s\n",cptr->cName);
        printf("%d\n",cptr->roomNo);
        printf("%f\n",cptr->NAACrate);
}
/*
MES Wadia College
521
8.800000
*/