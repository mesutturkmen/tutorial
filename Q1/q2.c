#include<stdio.h>
int main(){
    int n1,n2,operator;
    scanf("%d%d%d",&1n1,&n2,&operator);
    switch(operator){
        case 1:
        if(n1>n2)
            printf("%d",n1);
        else
            printf("%d",n2);
        break;
        case 2:
        printf("%d",n1%n2);
        break;
        case 3:
        if(n1<n2)
            printf("%d",n1);
        else
            printf("%d",n2);
        break;






    }





    return 0;
}