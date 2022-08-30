#include <stdio.h>
int main(){
    int time=40000;
    int seconds,minutes,hours;
    seconds=time%60;
    minutes=time/60;
    hours=minutes/60;
    minutes=minutes%60;
    printf("It will take %02d:%02d:%02d for computer to calculate\n",hours,minutes,seconds);
    return 0;
    }