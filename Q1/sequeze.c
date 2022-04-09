#include<stdio.h>
void squeze(char name[],char target){
    int j;
    for(int i=j=0;name[i]!='\0';i++){
        if(name[i]!=target){ 
            name[j]=name[i];
            j++;
        }
            
            name[j]='\0';
    
       
    }
    
}
int main(){
    char *new;
    char target;
    char ar[20];
    scanf("%s\n",ar);
    scanf("%c",&target);
    squeze(ar,target);
    printf("%s\n",ar);
}