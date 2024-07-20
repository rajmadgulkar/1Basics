#include<stdio.h>
typedef struct Movie{
    char mName[20];
    int headCount;
    float tickPrice;
}mov;
void main(){
    mov obj1={"YJHD",8,650.24};
    mov obj2={"BB",5,550.50};
    mov obj3={"DDD",2,300.80};

    mov arr[]={obj1,obj2,obj3};

    for (int i=0;i<3;i++){
        printf("%s\n",arr[i].mName);
        printf("%d\n",arr[i].headCount);
        printf("%f\n",arr[i].tickPrice);

    }

}
/*
YJHD
8
650.239990
BB
5
550.500000
DDD
2
300.799988
*/