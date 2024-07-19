#include<stdio.h>
#include<string.h>
struct CricPlayer{
        int jerNo;
        char pName[20];
        float sal;
}obj1={18,"Virat",5.0f};
void main(){
        struct CricPlayer obj2;
        obj2.jerNo=45;
        strcpy(obj2.pName,"Rohit");
        obj2.sal=4.0f;

        printf("%d\n",obj1.jerNo);
        printf("%s\n",obj1.pName);
        printf("%f\n",obj1.sal);

        printf("%d\n",obj1.jerNo);
        printf("%s\n",obj2.pName);                                                  printf("%f\n",obj2.sal);
}
/*
18
Virat
5.000000
18
Rohit
4.000000
*/