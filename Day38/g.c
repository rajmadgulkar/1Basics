#include<stdio.h>
struct movieInfo{
    char actorName[10];
    float imdb;
};
struct movie{
    char mName[20];
    struct movieInfo obj1;
};
void main(){
    struct movie obj2={"Kantara",{"Rishabh",8.9}};
    printf("%s\n",obj2.mName);
    printf("%s\n",obj2.obj1.actorName);
    printf("%f\n",obj2.obj1.imdb);
}
/*
Kantara
Rishabh
8.900000
*/
