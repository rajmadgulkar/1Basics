#include<stdio.h>
#include<string.h>
typedef struct Employee{
        int empId;
        char empName[20];
        float sal;
        struct Employee *next;
}emp;
void main(){
        emp obj1;
        emp *head=&obj1;

        head->empId=1;
        strcpy(head->empName,"Raj");
        head->sal=50.00;

        printf("%d\n",head->empId);
        printf("%s\n",head->empName);
        printf("%f\n",head->sal);
}
/*
1
Raj
50.000000
*/