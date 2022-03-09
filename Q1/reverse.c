#include<stdio.h>
int reverse(int);
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",reverse(num));




    return 0;
}
int reverse(int a){
    int total =0,r;
    int temp =a;
    while(a>0){
        r=a%10;
        total =total*10 +r;
        a/=10;




    }

    return total;



}