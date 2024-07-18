#include <stdio.h>
struct cricPlayer{
    char Pname[20];
    int jerNo;
    float avg;
};
void main(){
    struct cricPlayer obj1={"Virat Kohli",18,10};
    printf("%s\n",obj1.Pname);
    printf("%d\n",obj1.jerNo);
    printf("%f\n",obj1.avg);
    
}
/*
Virat Kohli
18
10.000000
*/
