#include<stdio.h>
int main(){
    int ar[79]={0},ar1[40],ar2[40]={0},index=1;
    int a,temp,count =0;
    int c=0,c2=0;
    scanf("%d",&ar[0]);
    while((a=getchar())!='\n'){
        scanf("%d",&ar[index++]);
        
    }

    for(int i=0;i<index;i++){
        count =1,c=0;
        for(int j=i+1;j<index;j++){
            
            
                if(ar[i]==ar[j]){
                    count++;
                }
            
    }
        if(count==1){ 
            printf("%d ",ar[i]);
    
        }
        
    }

    return 0; 
    }


