#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct employee{
    int empId;
    char empName[20];
    float sal;
    struct employee *next;
}emp;

void accessData(emp *ptr){
    printf("%d\n", ptr->empId);
    printf("%s\n", ptr->empName);
    printf("%f\n", ptr->sal);

}


void main(){
    emp *em1=(emp*)malloc(sizeof(emp));
    emp *em2=(emp*)malloc(sizeof(emp));
    emp *em3=(emp*)malloc(sizeof(emp));

    em1->empId=1;
    strcpy(em1->empName,"Tejas");
    em1->sal=5.5;
    em1->next=em2;

    em2->empId=2;
    strcpy(em2->empName,"Pratik");
    em2->sal=5.8;
    em2->next=em3;

    em3->empId=3;
    strcpy(em3->empName,"Aniket");
    em3->sal=6.00;
    em3->next=NULL;


    accessData(em1);
    accessData(em2);
    accessData(em3);







}
/*
1
Tejas
5.500000
2
Pratik
5.800000
3
Aniket
6.000000
*/
