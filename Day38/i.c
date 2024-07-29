#include <stdio.h>
struct demo{
    int x;
    float y;
};
void main(){
    struct demo obj={10,20.5f};
    int arr[]={10,20,30,40,50};

    printf("%p\n",&arr[0]);
    printf("%p\n",arr);

    printf("%p\n",&obj.x);
    printf("%p\n",&obj);

    printf("%p\n",obj);

}
/*
0000005e1abffba0
0000005e1abffba0
0000005e1abffbb8
0000005e1abffbb8
41a400000000000a
*/