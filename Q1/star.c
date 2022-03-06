#include<stdio.h>
int main(){
  int num,star,empty;
  scanf("%d",&num);
  star =1;
  empty=num-star;
  for(int i=1;i<=num;i++){
      for(int j=empty;j>0;j--){
          printf(" ");
      }for(int k=star;k>0;k--){
          printf("*");
      }star++; 
      empty--;

printf("\n");  
    }
return 0;
}