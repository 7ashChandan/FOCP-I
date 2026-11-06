#include<stdio.h>
int distanceTraveled(int mainTank, int additionalTank) {
    if((mainTank-1)/4>additionalTank)
    return (mainTank+additionalTank)*10;
    else
    return  (mainTank+(mainTank-1)/4)*10;    
}
int main(){
    int mainTank,additionalTank;
    scanf("%d %d",&mainTank, &additionalTank);
    printf("%d",distanceTraveled(mainTank,additionalTank));
}