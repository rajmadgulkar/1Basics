#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct soc{
    char sName[20];
    int noofWings;
    float avgRent;
};
void main(){
    struct soc *ptr=(struct soc*)malloc(sizeof(struct soc));
    struct soc obj;
    strcpy(obj.sName,"Sunshine");
    obj.noofWings=12;
    obj.avgRent=45000.00;

    printf("%s\n",obj.sName);
    printf("%d\n",obj.noofWings);
    printf("%f\n",obj.avgRent);

}
/*
Sunshine
12
45000.000000
*/