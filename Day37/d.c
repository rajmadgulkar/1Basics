#include<stdio.h>
struct Movie{
    char mName[20];
    int noofTick;
    float tickPrice;
}obj1={"Kalki",4,540.00};
void fun(){
    struct Movie obj2={"Munjya",8,820.15};
    printf("%s\n",obj2.mName);
    printf("%d\n",obj2.noofTick);
    printf("%f\n",obj2.tickPrice);

};
void main(){
    struct Movie obj3={"Kill",5,650.23};
    printf("%s\n",obj1.mName);
    printf("%d\n",obj1.noofTick);
    printf("%f\n",obj1.tickPrice);
    
    fun();

    printf("%s\n",obj3.mName);
    printf("%d\n",obj3.noofTick);
    printf("%f\n",obj3.tickPrice);
    

}
/*
Kalki
4
540.000000
Munjya
8
820.150024
Kill
5
650.229980
*/