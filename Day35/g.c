#include<stdio.h>
#include<stdlib.h>
void main(){
    int **ptr=(int*)calloc(5,sizeof(int));
    for (int i=0;i<5;i++){
        *(ptr+i)=10+i;
    }
    for(int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
}
/*
10
11
12
13
14
*/