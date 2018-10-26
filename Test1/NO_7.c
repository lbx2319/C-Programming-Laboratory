#include <stdio.h>
#include <stdlib.h>

int main(){    
	int i,j,k,first,second,third,fourth,count=0;
	printf("Please input four numbers: \n");
	scanf("%d %d %d %d",&first,&second,&third,&fourth);
	printf("\n");

    for(i=0;i<=9;i++){
		if(i==first||i==second||i==third||i==fourth){
			for(j=0;j<=9;j++){
				if(j==first||j==second||j==third||j==fourth){
					for(k=0;k<=9;k++){
						if(k==first||k==second||k==third||k==fourth){
							if(i!=j&&j!=k&&k!=i){
								count++;
							}
						}
					}
				}
			}
		}
	}
	printf("The total number of permutations is %d\n",count);

	for(i=0;i<=9;i++){
		if(i==first||i==second||i==third||i==fourth){
			for(j=0;j<=9;j++){
				if(j==first||j==second||j==third||j==fourth){
					for(k=0;k<=9;k++){
						if(k==first||k==second||k==third||k==fourth){
							if(i!=j&&j!=k&&k!=i){
								printf("%d%d%d\n",i,j,k);
							}
						}
					}
				}
			}
		}
	}

    system("pause");
}
