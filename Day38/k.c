#include <stdio.h>
struct demo{
    int x;
    float y;
};
void fun(struct demo obj){
    printf("%d\n",obj.x);
    printf("%f\n",obj.y);

    printf("%p\n",&obj.x);
    printf("%p\n",&obj.y);
}
void gun(struct demo *ptr){
    printf("%d\n",ptr->x);
    printf("%f\n",ptr->y);
}
void main(){
    struct demo obj={10,55.36f};
    fun(obj);
    gun(&obj);
}
/*
10
55.360001
000000fe223ffa80
000000fe223ffa84
10
55.360001
*/