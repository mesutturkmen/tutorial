#include<stdio.h>
 void rev(int ar[],int i){
     int temp;
    
    for(int j=0;j<i/2;j++){
        temp=ar[j];
        ar[j]=ar[i-j-1];
        ar[i-j-1]=temp;
    }
    for(int k=0;k<i;k++){
        printf("%d ",ar[k]);
    }   }
int main(){
    int ar[79]={},i=1,a,temp;
    scanf("%d",&ar[0]);
    while((a=getchar())!='\n'){
        scanf("%d",&ar[i]);
        i++;
    }
  
    rev(ar,i);
}