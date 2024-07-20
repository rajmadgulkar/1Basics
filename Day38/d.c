#include<stdio.h>
struct Player{
    char pName[20];
    int jerNo;
    float rev;
};
void main(){
    struct Player obj1={"Virat",18,980.50};
    struct Player obj2={"M S Dhoni",7,600.50};
    struct Player obj3={"Rohit",45,500.50};

    struct Player arr[3]={obj1,obj2,obj3};

    for (int i=0;i<3;i++){
        printf("%s\n",arr[i].pName);
        printf("%d\n",arr[i].jerNo);
        printf("%f\n",arr[i].rev);

    }
}
/*
Virat
18
980.500000
M S Dhoni
7
600.500000
Rohit
45
500.500000
*/