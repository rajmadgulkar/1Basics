/* 
A A A
B B B
C C C
*/

#include <stdio.h>
void main(){
    char ch='A';

    for (int i=1; i<=3;i++){

        for(int j=1; j<=3;j++){
            printf(" %c",ch);
        }
        printf("\n");
        ch++;

    }
}