#include<stdio.h>
int main(){
    int num,temp,max1=0,max2=0,count;
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%d",&num);

        if(num > max1){
            max2 =max1;
            max1  =num;
        }
        if( max1 != num && num>max2)
        max2=num;
    }
    printf("first biggest is %d\nsecond biggest %d",max1,max2);


}