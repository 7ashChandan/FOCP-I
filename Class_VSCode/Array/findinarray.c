<<<<<<< HEAD
#include<stdio.h>
int main(){
    int marks[5],i;
    printf("Input marks\n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    int target;
    printf("Enter traget: ");
    scanf("%d",&target);
    printf("index of element: ");
    for(i=4;i>=0;i--){
        if(marks[i]==target)
        printf("%d",i);        
    }
 
}
=======
#include<stdio.h>
int main(){
    int marks[5],i;
    printf("Input marks\n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    int target;
    printf("Enter traget: ");
    scanf("%d",&target);
    printf("index of element: ");
    for(i=4;i>=0;i--){
        if(marks[i]==target)
        printf("%d",i);        
    }
 
}
>>>>>>> 1ce2e8ee3a01241813780f1204a418575c28f7ab
