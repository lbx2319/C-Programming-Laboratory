#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, n=3, a, b;
	
		scanf("%d", &b);
		for(a = 1 ; a <= b;a++){
            for (i = 1; i <= n; i++) {
                for (k = 0; k < n - i ; k++) {
                    printf(" ");                    
                }
                if(a!=b){
                        for(j=0;j<b-a;j++) printf(" ");
                    }
                for (j = 0; j < 2 * i - 1 ; j++) {
                    printf("*");
                }
                printf("\n");
            }
            n++;
        }
        for(k=0;k<2;k++){
            for(i=0;i<j/2;i++)
                printf(" ");
                printf("*\n");
        }
            
	system("pause");
}