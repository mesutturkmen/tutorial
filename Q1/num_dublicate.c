#include<stdio.h>
int main(){
    int ar[79]={0},ar1[40],ar2[40]={0},size=1;
    int a,temp,count =0;
    int c=0;
    scanf("%d",&ar[0]);
    while((a=getchar())!='\n'){
        scanf("%d",&ar[size]);
        size++;
    }
     for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(ar[i] == ar[j])
            {
                count++;
                break;
            }
        }

}
    printf("%d",count);
}