#include<stdio.h>
void increament(int x){
    x=x+1;
    printf("Inside: %d\n", x);
}
int main(){
    int a=5;
    increament(a);
    printf("Outside: %d\n",a);
}