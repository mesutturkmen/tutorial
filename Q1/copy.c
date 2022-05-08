#include<stdio.h>
 void copy1(char *s1,char *s2){
     for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
 ; // do nothing in body
 }}
void copy(char * name1,char * name){
    for(int i=0;(name1[i]=name[i])!='\0';i++){;}

}
int main(){
    char *name="mehmet";
    char name1[6];
    copy1(name1,name);
    printf("%s",name1);
    
}