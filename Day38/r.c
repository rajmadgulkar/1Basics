#include<stdio.h>
#pragma pack(1)
struct demo{
    char ch;
    int x;
    int y;
};
void main(){
    printf("%d\n",sizeof(struct demo));
}
//9