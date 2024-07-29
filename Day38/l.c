#include <stdio.h>
struct{
    int x;
    float y;
}obj={10,20.3f};
void main(){
    printf("%d\n",obj.x);
    printf("%f\n",obj.y);
}
/*10
20.299999
*/