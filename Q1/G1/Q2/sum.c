#include<stdio.h>
int addNumbers(int n) {
  if(n==0)
   return 0;

  else
    return n + addNumbers(n - 1);
}
int main(){

    printf("%d\n",addNumbers(10));



}