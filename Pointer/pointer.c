#include<stdio.h>
int main(){
    int a=20;
    int *k;
    k=&a;
    printf("value of a = %d\n",a);
    printf("address of a = %p\n",(void *)k);
    printf("value using pointer = %d\n",*k);
}