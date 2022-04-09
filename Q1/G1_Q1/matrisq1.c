#include<stdio.h>
void carp(int m1[][5], int m2[][5], int r1, int r2){
    int mul[r1][5];
    for(int i=0;i<r1;i++){
        for(int j=0;j<5;j++){
            mul[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<r2;k++){
                mul[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<5;j++){
            printf("%5d ",mul[i][j]);
        }
        printf("\n");
    }
}
void kontrol(int m1[][5] , int m2[][5],int r1,int r2){
    if(r2==5) carp(m1,m2,r1,r2);
    else printf("0");

}

int main(){
    int r1,r2;
    scanf("%d%d",&r1,&r2);
    int m1[r1][5];
    int m2[r2][5];
    for(int i=0;i<r1;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    kontrol(m1,m2,r1,r2);
}
