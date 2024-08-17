#include<stdio.h>
int maxElement(int *arr,int n){
    int *max=arr;
    for(int *ptr=arr+1;ptr<arr+n;ptr++){

        if(*ptr>*max){
            max=ptr;
        }
    }
    return *max;
}



void main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=maxElement(arr,n);
    printf("Max Element in a  array is:%d",max);

}