#include <stdio.h>
#include <stdlib.h>

int main(){
    int year,month,date,totaldays,dayofweek;

    while(1){
        printf("Please input year (0 to Exit):");
        scanf("%d",&year);
        if(year == 0) break;
        printf("Please input month:");
        scanf("%d",&month);
        printf("Please input date:");
        scanf("%d",&date);

        printf("%d/%d/%d is ",year,month,date);
        totaldays = 0;
        
        for(int i = 1912 ; i < year ; i++){
            if(i%4==0) totaldays+=366;
            else totaldays+=365;
        }
        
        for(int i = 1 ; i < month ; i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) totaldays+=31;
            else if(i==4||i==6||i==9||i==11) totaldays+=30;
            if(year%4==0 && i==2)  totaldays+=29;
            else totaldays+=28;
        }

        totaldays+=date;
        dayofweek = totaldays % 7;

        switch(dayofweek){
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 0:
                printf("Sunday\n");
                break;
            default:
                printf("%d",dayofweek);
        }
        printf("\n");
    }
    system("pause");
}