#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && b<=c)
    printf("%d %d %d\n",c,b,a);
    else if(b<=a && a<=c)
    printf("%d %d %d\n",c,a,b);
    else
    printf("%d %d %d\n",b,c,a); 

}
