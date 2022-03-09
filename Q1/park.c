#include<stdio.h>
float park(float hours){
    float fee=2.00;
    if(hours>3.0)
        fee+=(hours-3.0)*0.5;
    if(hours>=24.0)
    fee =10.0;
    return fee;


    }
int main(){
    float hours;
    printf("car    hours    fee\n");
    for(int i=1;i<=3;i++){
    scanf("%f",&hours);
    printf("%d    %.1f     %.2f\n",i,hours,park(hours));
    }

return 0;
}