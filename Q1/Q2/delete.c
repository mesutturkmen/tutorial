#include<stdio.h>
void get_array(int size, int numbers[]){
    for(int i=0;i<size;i++){
        scanf("%d",&numbers[i]);
    }
}
int delete_from_array(int size,int numbers[],int intToDelete){
    int c=0,index;
    for(int i=0;i<size;i++){
        if(numbers[i]==intToDelete){
            c++;
            index=i;
        }
    }
    if(c!=0){
        for(int i=index;i<size-1;i++){
            numbers[i]=numbers[i+1];
        }
        
        return 1;}
    else return -1;
}
void print_array(int size,int numbers[],int intToDelete){
    int result = delete_from_array(size,numbers,intToDelete);
    int index=delete_from_array(size,numbers,intToDelete);
    if(result==-1){
        for(int i=0;i<size;i++){
            printf("%d ",numbers[i]);}}
    else{
        for(int i=0;i<size;i++){
             printf("%d ",numbers[i]);
    }
    }
} 

int main(){
      int size = 10;
      int numbers[size];
      get_array(size, numbers);
int intToDelete;
scanf("%d", &intToDelete);
int deleteResult = delete_from_array(size, numbers, intToDelete);
    if(deleteResult == -1){
             print_array(size, numbers,intToDelete);
      }
      else{
             print_array(size - 1, numbers,intToDelete);
}
return 0; }