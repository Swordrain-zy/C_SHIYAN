#include <stdio.h>

bool Week_day(int month,int date);

int main(){
    int month,date;
    printf("Input date:(1 1 as Jan 1st)\n");
    scanf("%d%d",&month,&date);
    Week_day(month,date);
    return 0;
}

bool Week_day(int month,int date){
    if(month<1||month>12){printf("ERROR.month\n");return false;}
    else{
        if(month==2){
            if(date<1||date>28){printf("ERROR.date\n");return false;}}
        else if(month==4||month==6||month==9||month==11){
            if(date<1||date>30){printf("ERROR.date\n");return false;}
        }
        else{
            if(date<1||date>31){printf("ERROR.date\n");return false;}
        }
    }
    int day=0;
    for(int i=1;i<month;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            day+=31;
        }
        else if(i==2){day+=28;}
        else{day+=30;}
    }
    day+=date;
    int weekday;
    weekday=day%7+1;
    switch(weekday){
        case 2:
            printf("2019.%d.%d is Tuesday.\n",month,date);break;
        case 3:
            printf("2019.%d.%d is Wednesday.\n",month,date);break;
        case 4:
            printf("2019.%d.%d is Thursday.\n",month,date);break;
        case 5:
            printf("2019.%d.%d is Friday.\n",month,date);break;
        case 6:
            printf("2019.%d.%d is Saturday.\n",month,date);break;
        case 7:
            printf("2019.%d.%d is Sunday.\n",month,date);break;
        default:
            printf("2019.%d.%d is Monday.\n",month,date);break;
    }
    return true;
}