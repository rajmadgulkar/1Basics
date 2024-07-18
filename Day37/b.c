#include <stdio.h>
struct cricPlayer{
    char Pname[20];
    int jerNo;
    float avg;
}obj2={"M.S Dhoni",7,9};//Data Section
void main(){
    struct cricPlayer obj1={"Virat Kohli",18,10};
    printf("%s\n",obj1.Pname);
    printf("%d\n",obj1.jerNo);
    printf("%f\n",obj1.avg);
    
    printf("%s\n",obj2.Pname);
    printf("%d\n",obj2.jerNo);
    printf("%f\n",obj2.avg);
}
/*
Virat Kohli
18
10.000000
M.S Dhoni
7
9.000000
*/