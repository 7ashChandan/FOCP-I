#include<stdio.h>
int findDelayedArrivalTime(int arrivalTime,int delayedTime){
    return (delayedTime+arrivalTime)%24;
}
int main(){
    int arrivalTime,delayedTime;
    scanf("%d %d",&arrivalTime,&delayedTime);
    printf("%d",findDelayedArrivalTime(arrivalTime,delayedTime));
}
