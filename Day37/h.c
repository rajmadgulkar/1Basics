#include<stdio.h>
#include<stdlib.h>
char* myStrcpy(char* dest,char* src){
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    return dest;
}
struct IPL{
    char sName[20];
    int tTeams;
    double price;
};
void main(){
    struct IPL *ptr=(struct IPL*)malloc(sizeof(struct IPL));
    struct IPL obj;
    myStrcpy(obj.sName,"TATA");
    obj.tTeams=8;
    obj.price=400.40;

    printf("%s\n",obj.sName);
    printf("%d\n",obj.tTeams);
    printf("%f\n",obj.price);
}
/*
TATA
8
400.400000
*/