#include <stdio.h>
struct demo{
    int x:4;
    int y;
};
void main(){
    struct demo obj={16,500};
    printf("%d\n",sizeof(struct demo));
}
//8