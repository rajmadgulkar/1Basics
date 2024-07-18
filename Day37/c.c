#include<stdio.h>
struct Picnic{
    char Pname[20];
    int nooftourists;
    double Budget;
}obj1={"Mahakaleshwar",8,4000};
void main(){
    struct Picnic obj2={"Kashi Vishwanath",5,2000};
    printf("%s\n",obj1.Pname);
    printf("%d\n",obj1.nooftourists);
    printf("%f\n",obj1.Budget);

    printf("%s\n",obj2.Pname);
    printf("%d\n",obj2.nooftourists);
    printf("%f\n",obj2.Budget);

}
/*
Mahakaleshwar
8
4000.000000
Kashi Vishwanath
5
2000.000000
*/