#include <stdio.h> 
#include <stdlib.h>

int main(){
    int i, j, num, sum=0;
    do{
        printf("Please input a number: ");
        scanf("%d",&num);
        if(num<2) printf("Your input number must be larger than 2!\n");
    }while(num<2);
   
    if(num!=2){
        for(i=2;i<=num;i++){
            printf("%dx%d",i+1,i-1);
            if(i!=num) printf("+");        
        }
    }
    else printf("3x1");
    printf("=");
    if(num!=2){
        for(i=2;i<=num;i++){
            printf("%d",(i+1)*(i-1));
            sum+=(i+1)*(i-1);
            if(i!=num) printf("+");  
            else printf("=%d\n",sum);      
        }
    }
   else printf("3=3\n");

   system("pause");
}