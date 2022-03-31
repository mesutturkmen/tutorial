#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void get_input(int size, int numbers[]){
    //numbers[0]=0;
    while(true){
    scanf("%d",&numbers[0]);
    if(numbers[0]!=0) break;    
    }
    scanf("%d",&numbers[1]);
    scanf("%d",&numbers[2]);

}
void print_equation(int size,int numbers[]){
    int  a=numbers[0];
    int  b=numbers[1];
    int c=numbers[2];
    if(a>0 && b==0 &&c>0)
        printf("%dx^2+%dc\n",numbers[0],numbers[2]);
    else  if(a>0 && b>0 &&c>0)
        printf("%dx^2+%dx%dc\n",numbers[0],numbers[1],numbers[2]);
    printf("%dx^2+%dx+%dc\n",numbers[0],numbers[1],numbers[2]);

}
float discriminant(int size,int numbers[]){
        float a=numbers[0];
    float b=numbers[1];
    float c=numbers[2];
    float disc=b*b-(4*a*c);
    return disc;
}
void print_roots ( int size, int numbers[ ] ){
    float disc=discriminant(size,numbers);
    float r1,r2;
    float a=numbers[0];
    float b=numbers[1];
    float c=numbers[2];
    if(disc<0) printf("-");
    else if(disc==0){ 
        r1 = -b/(2*a);
        printf("%.2f",r1);}
    else{ 
        r1 =(-b-sqrt(disc))/2*a;
        r2 =(-b+sqrt(disc))/2*a;
        printf("%.2f\n%.2f",r1,r2);
    }
}

int main(){
int size = 3;
int numbers[size];
get_input(size, numbers);
print_equation (size, numbers); 
printf("%.1f\n", discriminant(size, numbers));
print_roots(size, numbers);
}