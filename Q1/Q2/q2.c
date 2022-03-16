#include<stdio.h>
float calc(int n,int p){
int sum=0,r,r1,res=0,c=1,temp;
temp=n;
    while(n!=0){
    r =n%10;
    sum =sum*10+r;
    n/=10;
    }
//printf("%d\n",sum);
    while(sum>0){
    c=1;
    r1=sum%10;
        for(int i=1;i<=p;i++){
        c*=r1;



        }
    //printf("%d\n",c);
    p++;
    res+=c;
    sum/=10;


    }
//printf("%d\n",res);
return (float)res/temp;
}









int main(){
int n,p;
scanf("%d%d",&n,&p);
//calc(n,p);
printf("%f",calc(n,p));





}