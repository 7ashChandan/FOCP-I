<<<<<<< HEAD
#include<stdio.h>
int secondhighest(int m[],int n){  
    int max=m[0],smax=-1;   
    for(int i=0;i<n;i++){
        if(m[i]>max){
            smax=max;
            max=m[i];
        } 
        else if(m[i]<max && m[i]>smax){
            smax =m[i];
    }
    printf("max: %lld\n",max);
    printf("second max: %lld\n",smax);

}
int main(){
    int n,m[100];
    printf("enter n:");
    scanf("%d",&n);
     printf("enter the input: ");
    for(int i=0;i<n;i++){
        scanf("%d",& m[i]);
    }
    secondhighest(m,n);
=======
#include<stdio.h>
int secondhighest(int m[],int n){  
    long long max=m[0],smax;   
    for(int i=0;i<n;i++){
        if(m[i]>max){
            smax=max;
            max=m[i];
        }       
    }
    printf("max: %lld\n",max);
    printf("second max: %lld\n",smax);

}
int main(){
    int n,m[100];
    printf("enter n:");
    scanf("%d",&n);
     printf("enter the input: ");
    for(int i=0;i<n;i++){
        scanf("%d",& m[i]);
    }
    secondhighest(m,n);
>>>>>>> 1ce2e8ee3a01241813780f1204a418575c28f7ab
}
