#include<stdio.h>

int base(int n){
    int b=1,s=0;
while(n!=0){
    s+=b*(n%10);
    n/=10;
    b*=2;
   
}
 return s;
}
int main(){
int n;





scanf("%d",&n);
printf("%d",base(n));



return 0;
}