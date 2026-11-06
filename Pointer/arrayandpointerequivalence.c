#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    printf("%d %d\n",arr[1], *(p+1));
    printf("%d %d\n",arr[2], *(p+2)); 

}