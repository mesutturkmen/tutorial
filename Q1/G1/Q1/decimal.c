#include<stdio.h>
int exp(int n,int m){
    if(m==0) return 1;
    else return n*exp(n,m-1);
}




int main(){

int bin=0,dec=15,rem,i=1;
while(dec>0){
    rem=dec%2;
    dec/=2;
    bin+=rem*i;
    i*=10;

    






}
printf("%d\n",bin);

printf("%d",exp(6,4));


}