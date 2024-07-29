#include<stdio.h>
struct demo{
    int x;
    float y;
};
void fun(struct demo *ptr){
    printf("%d\n",ptr->x);
    printf("%f\n",ptr->y);
}

void main(){
    struct demo obj={10,20.5f};
    fun(&obj);
}
/*
10
20.500000
*/