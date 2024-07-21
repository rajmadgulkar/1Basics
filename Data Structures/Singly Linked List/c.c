#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct movie{
    char mName[20];
    int headCount;
    float imdbRate;
    struct movie *next;
}mov;
void accessData(mov *ptr){
    printf("%s\n",ptr->mName);
    printf("%d\n",ptr->headCount);
    printf("%f\n",ptr->imdbRate);


}
void main(){

    mov *m1=(mov*)malloc(sizeof(mov));
    mov *m2=(mov*)malloc(sizeof(mov));
    mov *m3=(mov*)malloc(sizeof(mov));

    strcpy(m1->mName,"Kantara");
    m1->headCount=5;
    m1->imdbRate=9.8;

    strcpy(m2->mName,"Kill");
    m2->headCount=2;
    m2->imdbRate=7.8;

    strcpy(m3->mName,"Munjya");
    m3->headCount=4;
    m3->imdbRate=8.5;

    accessData(m1);
    accessData(m2);
    accessData(m3);

    
}
/*
Kantara
5
9.800000
Kill
2
7.800000
Munjya
4
8.500000
*/