#include<stdio.h>
struct Movie{
    char mName[20];
    int count;
    float price;
}obj1={"Tumbaad",5,1000.00};
void main(){
    struct Movie *ptr=&obj1;

    printf("%s\n",obj1.mName);
    printf("%d\n",obj1.count);
    printf("%f\n",obj1.price);

    printf("%s\n",(*ptr).mName);
    printf("%d\n",(*ptr).count);
    printf("%f\n",(*ptr).price);

}
/*
Tumbaad
5
1000.000000
Tumbaad
5
1000.000000
*/