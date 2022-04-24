#include<stdio.h>
#include<math.h>
int calculateAverageOfNeighbors(int i, int j, int size, int array[][size]){
    int avg;
    if(i==0){
        if(j==0){
            avg=(array[i][j+1]+array[i+1][j+1]+array[i+1][j])/3;
            return avg;
        }
        else if(j==size-1){
            avg=(array[i][j-1]+array[i+1][j]+array[i+1][j-1])/3;
            return avg;
        }
        else{
            avg=(array[i][j-1]+array[i][j+1]+array[i+1][j]+array[i+1][j+1]+array[i+1][j-1])/5;
            return avg;
        }



    }
    else if(i==size-1){
        if(j==0){
            avg=(array[i][j+1]+array[i-1][j+1]+array[i-1][j])/3;
            return avg;
        }
        else if(j==size-1){
            avg=(array[i][j-1]+array[i-1][j]+array[i-1][j-1])/3;
            return avg;
        }
        else{
            avg=(array[i][j-1]+array[i][j+1]+array[i-1][j]+array[i-1][j+1]+array[i-1][j-1])/5;
            return avg;
        }



    }
    else{
        if(j==0){
            avg=(array[i][j+1]+array[i+1][j]+array[i-1][j]+array[i-1][j+1]+array[i+1][j+1])/5;
            return avg;
        }
        else if(j==size-1){avg=(array[i][j-1]+array[i+1][j]+array[i-1][j]+array[i-1][j-1]+array[i+1][j-1])/5;
            return avg;}
       else{ avg=(array[i-1][j-1]+array[i-1][j]+array[i-1][j+1]+array[i][j-1]+array[i][j+1]+array[i+1][j-1]+array[i+1][j]+array[i+1][j+1])/8;
        return avg;
       }
    }

}
void print(int size,int array[][size]){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
          printf("%5d",array[i][j]);
        }
        printf("\n");
    }
printf("\n");
}
int main(){
    int col,itr,count=1;
    scanf("%d%d",&col,&itr);
    int array[col][col];
    int empty[col][col];
    int temp[col][col];
    for(int i=0;i<col;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<col;j++){
            empty[i][j]=0;
temp[i][j]=0;        }
    }
    for(int i=0;i<col;i++){
            for(int j=0;j<col;j++){
                empty[i][j]=calculateAverageOfNeighbors(i,j,col,array);
                temp[i][j]=empty[i][j];
            }
        }
        print(col,empty);
    
    while(count<itr){
        for(int i=0;i<col;i++){
            for(int j=0;j<col;j++){
                empty[i][j]=calculateAverageOfNeighbors(i,j,col,temp);
                
            }
        }
        print(col,empty);
        for(int i=0;i<col;i++){
            for(int j=0;j<col;j++){
                //empty[i][j]=calculateAverageOfNeighbors(i,j,col,array);
                temp[i][j]=empty[i][j];
            }
        }
        
    count++;
    }
}
