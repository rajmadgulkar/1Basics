#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr=(int*)malloc(sizeof(int));
    printf("%p\n",ptr);
    *ptr=50;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);

    free(ptr);
    printf("%d\n",*ptr);

}
/*
00000219cf8f7fa0
00000219cf8f7fa0
50
-812653072
*/