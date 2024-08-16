#include<stdio.h>
int top=-1;
int size=0;
int push(int stack[]){
    if(top==size-1){
        printf("Stack overflow");
        return -1;
    }else{
        int data;
        printf("Enter Data");
        scanf("%d",&data);
        top++;
        stack[top]=data;
        return 0;
    }
}

int pop(int stack[]){
    if(top==-1){
        printf("Stack is empty\n");
        return -1;
    }else{
        int data=*(stack+top);
        top--;
        return data;
    }
}

void main(){
    printf("Size of stack:");
    scanf("%d",&size);
    int stack[size];
    char choice;
    do{
        printf("1.push\n");
        printf("2.pop\n");

        int ch;
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            push(stack);
            break;
            case 2:
            {
                int ret=pop(stack);
                if(ret!=1){
                    printf("%d popped",ret);
                }

            }
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
        getchar();
        printf("Do you want to continue?");
        scanf("%c",&choice);
    }while (choice=='Y'||choice=='y');
}
/*
Size of stack:3
1.push
2.pop
Enter your choice:1
Enter Data10
Do you want to continue?y
1.push
2.pop
Enter your choice:1 
Enter Data20
Do you want to continue?y
1.push
2.pop
Enter your choice:1
Enter Data30
Do you want to continue?y
1.push
2.pop
Enter your choice:1
Stack overflowDo you want to continue?y
1.push
2.pop
Enter your choice:2
30 poppedDo you want to continue?y
1.push
2.pop
Enter your choice:2
20 poppedDo you want to continue?y
1.push
2.pop
Enter your choice:2
10 poppedDo you want to continue?y
1.push
2.pop
Enter your choice:2
Stack is empty
-1 poppedDo you want to continue?n
*/