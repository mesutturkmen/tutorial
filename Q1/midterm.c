#include<stdio.h>
int main(){
    char a[6]="ankara";
    char b[8]="istanbul";
    char c[14]="";
    int i=0;
    int a_in=0;
    int b_in=0;
    do{
        if(i<12){
            if(i%2==0){
                c[i]=a[a_in]; a_in++;
                

            }
            else{
                c[i]=b[b_in]; b_in++;
            }
i++;
        }
        else{
            c[i]=b[b_in]; i++; b_in++;
        }
        

    }while(i<14);
    printf("%s\n",c);
}