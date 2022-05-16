#include <stdio.h>
#include<stdbool.h>
bool is_upper(char a){
     return a >= 'A' && a <= 'Z';
}
bool is_lower(char a){
     return a >= 'a' && a <= 'z';
}
int main(){
    char x='X';
    char y='a';
    printf("%i\n",is_upper(x));
    printf("%i\n",is_upper(y));
}
