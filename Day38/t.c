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

    printf("%p\n", (void*)&bk.bName);
    printf("%p\n", (void*)&bk.authorName);
    printf("%p\n", (void*)&bk.pages);
    printf("%p\n", (void*)&bk.price);

    printf("%p\n", (void*)&bk1.bName);
    printf("%p\n", (void*)&bk1.authorName);
    printf("%p\n", (void*)&bk1.pages);
    printf("%p\n", (void*)&bk1.price);
}

/*
0000005210dff8c0
0000005210dff8d4
0000005210dff8e8
0000005210dff8f0
0000005210dff880
0000005210dff894
0000005210dff8a8
0000005210dff8b0
*/