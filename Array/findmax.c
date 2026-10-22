<<<<<<< HEAD
#include<stdio.h>
int main(){
    int marks[5],i,result;
    printf("Input marks\n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    result = marks[0];
    printf("marks max\n");
    for(i=4;i>=0;i--){
        if(marks[i]>marks[i-1])
            result = marks[i];

       
    }
     printf("%d",result);
}
=======
#include<stdio.h>
int main(){
    int marks[5],i,result;
    printf("Input marks\n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    result = marks[0];
    printf("marks max\n");
    for(i=4;i>=0;i--){
        if(marks[i]>marks[i-1])
            result = marks[i];

       
    }
     printf("%d",result);
}
>>>>>>> 1ce2e8ee3a01241813780f1204a418575c28f7ab
