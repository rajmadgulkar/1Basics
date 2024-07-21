#include<stdio.h>
void fun(int* ptr){
    *ptr=*ptr+10;
    printf("%d\n",*ptr);
}
void main(){
    int x=10;
    fun(&x);
    printf("%d\n",x);
}
/*
20
20
*/