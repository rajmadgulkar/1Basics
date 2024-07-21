#include<stdio.h>
void fun(int* ptr){
    *ptr=*ptr+10;
    printf("%d\n",*ptr);
}
void main(){
    int x=10;
    int *ptr=&x;

    fun(ptr);
    printf("%d\n",x);
}
/*
20
20

*/