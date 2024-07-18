#include<stdio.h>
char* myStrcpy(char* dest,char* src){
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    return dest;
}
struct Ott{
    char pName[20];
    int acc;
    float price;
};
void main(){
    struct Ott obj1={"Amazon Prime",5,1000.25};
    struct Ott obj2;

    printf("Enter platform name:");
    gets(obj2.pName);
    printf("Enter No of accounts:");
    scanf("%d",&obj2.acc);
    printf("Enter price:");
    scanf("%f",&obj2.price);

    printf("%s\n",obj1.pName);
    printf("%d\n",obj1.acc);
    printf("%f\n",obj1.price);

    printf("%s\n",obj2.pName);
    printf("%d\n",obj2.acc);
    printf("%f\n",obj2.price);
}
/*
Enter platform name:Netflix
Enter No of accounts:5
Enter price:1000
Amazon Prime
5
1000.250000
Netflix
5
1000.000000
*/