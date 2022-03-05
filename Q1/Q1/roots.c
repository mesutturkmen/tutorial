#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
double delta,x2,x1;
scanf("%d%d%d",&a,&b,&c);

delta = b*b-(4*a*c);
if (delta > 0){
x1 =(-b+ sqrt(delta))/(2*a);
    x2=(-b- sqrt(delta))/(2*a);
}
else if(delta == 0){
    x1 =-b/2*a;
x2 =-b/2*a;}
printf("%.3lf\n%.3lf",x1,x2);
return 0;
}