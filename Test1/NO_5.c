#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){ 
    int i,j,s,c,num;
    scanf("%d",&num);

    for(i=2;i<=num;i++){ 
        s=0; 
        for(j=2;j*j<=i;j++)  
            if(i%j==0){ 
                s=1;
                break; 
            }
        if(!s) printf("%d ",i);    
    } 
    printf("\n");

    system("pause"); 
    return 0; 
} 
