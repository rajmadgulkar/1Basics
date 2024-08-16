#include<stdio.h>
int top=-1;
int arr[5];
void push(int data){
    top++;
    arr[top]=data;
}
void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    printf("\n");
}
/*
10
20
30
40
50
*/