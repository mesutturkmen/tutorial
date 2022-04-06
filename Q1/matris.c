#include<stdio.h>
int main(){
    int n,m,z;
    scanf("%d%d%d",&n,&m,&z);
    int m1[n][m];
    int m2[m][z];
    int mul[n][z];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<z;j++){
            scanf("%d",&m2[i][j]);
        }
    }
       for(int i=0;i<n;i++){
        for(int j=0;j<z;j++){
            mul[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<z;j++){
            for(int k=0;k<m;k++){
                mul[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<z;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}