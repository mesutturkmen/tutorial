#include<stdio.h>
    int main(){
        int km,count=0,yakit;
        float ort,orty=0.0,road,total_km,total_yakit;
        
        while(yakit !=-1){
        scanf("%d",&km);
        if(yakit ==-1 || km==-1)
        break;
        scanf("%d",&yakit);
        total_km+=km;
        total_yakit += yakit;

        road=(float)yakit/km;
        printf("%.2f\n",yakit/(float)km);
           
        }
        ort =total_yakit/total_km; 
        printf("%.2f",ort);





        return 0;
    }