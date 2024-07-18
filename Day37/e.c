#include<stdio.h>
#include<string.h>
char* myStrcpy(char* dest,char* src){
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    return dest;
}
struct Picnic{
    char locName[20];
    int headCount;
    float journeyDist;
};
void main(){
    struct Picnic obj1={"Amsterdam",2,8000};

    struct Picnic obj2;
    myStrcpy(obj2.locName,"paris");
    obj2.headCount=2;
    obj2.journeyDist=6016;

    printf("%s\n",obj1.locName);
    printf("%d\n",obj1.headCount);
    printf("%f\n",obj1.journeyDist);

    printf("%s\n",obj2.locName);
    printf("%d\n",obj2.headCount);
    printf("%f\n",obj2.journeyDist);

}
/*
Amsterdam
2
8000.000000
paris
2
6016.000000
*/