#include<stdio.h>
struct cmplx{
    double reel;
    double img;
};
typedef struct cmplx cmplex;
struct cmplx add(cmplex c1,cmplex c2){
    cmplex sum;
    sum.reel=c1.reel+c2.reel;
    sum.img=c1.img + c2.img;
    return sum;
}
int main(){
    cmplex c1,c2,sum;
    scanf("%lf",&c1.img);
    scanf("%lf",&c1.reel);
    scanf("%lf",&c2.img);
    scanf("%lf",&c2.reel);
    sum=add(c1,c2);
    printf("%2f",sum.img);
}