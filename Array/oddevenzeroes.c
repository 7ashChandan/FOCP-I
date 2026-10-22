<<<<<<< HEAD
#include<stdio.h>
int cnteven=0,cntodd=0,cntzero=0;
void evenoddzeroes(int m[],int n){  
    
    for(int i=0;i<n;i++){
        if(m[i]%2==0 && m[i]>0){
            cnteven++;
        }
        else if(m[i]==0)
        cntzero++;
        else
        cntodd++;   
    }
    printf("even: %d odd: %d zero: %d",cnteven,cntodd,cntzero);
}
int main(){
    int n,m[100];
    printf("enter n:");
    scanf("%d",&n);
     printf("enter the input: ");
    for(int i=0;i<n;i++){
        scanf("%d",& m[i]);
    }
    evenoddzeroes(m,n);
=======
#include<stdio.h>
int cnteven=0,cntodd=0,cntzero=0;
void evenoddzeroes(int m[],int n){  
    
    for(int i=0;i<n;i++){
        if(m[i]%2==0 && m[i]>0){
            cnteven++;
        }
        else if(m[i]==0)
        cntzero++;
        else
        cntodd++;   
    }
    printf("even: %d odd: %d zero: %d",cnteven,cntodd,cntzero);
}
int main(){
    int n,m[100];
    printf("enter n:");
    scanf("%d",&n);
     printf("enter the input: ");
    for(int i=0;i<n;i++){
        scanf("%d",& m[i]);
    }
    evenoddzeroes(m,n);
>>>>>>> 1ce2e8ee3a01241813780f1204a418575c28f7ab
}