#include<stdio.h>
int main(){
    for(int i=100;i<=500;i++){
        for(int j=100;j<=500;j++){
            for(int k=100;k<=500;k++){
                if(k*k==j*j+i*i||j*j==k*k+i*i||i*i==k*k+j*j)
                printf("%d %d %d\n",i,j,k);
            }
        }



    }






}