#include<stdio.h>

struct book {
    char bName[20];
    char authorName[20];
    int pages;
    double price;
};

void main() {
    struct book bk = {"OS", "AG", 350, 450.50};
    struct book bk1 = {"OS", "AG", 350, 450.50};

    printf("%d\n",sizeof(bk));
}
//56