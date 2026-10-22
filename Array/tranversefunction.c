<<<<<<< HEAD
#include<stdio.h>
void transverse(int m[],int x){
    printf("marks we entered is: \n");
    for(int i=0;i<x;i++)
    printf("%d\t",m[i]);
}
int main(){
    int marks[100],i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("input marks: ");
    for(int i=0;i<n;i++){
        scanf("%d",& marks[i]);
    }
    transverse(marks,n);
=======
#include<stdio.h>
void transverse(int m[],int x){
    printf("marks we entered is: \n");
    for(int i=0;i<x;i++)
    printf("%d\t",m[i]);
}
int main(){
    int marks[100],i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("input marks: ");
    for(int i=0;i<n;i++){
        scanf("%d",& marks[i]);
    }
    transverse(marks,n);
>>>>>>> 1ce2e8ee3a01241813780f1204a418575c28f7ab
}