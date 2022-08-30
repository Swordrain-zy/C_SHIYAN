#include <stdio.h>
int main(){
    int peach=1,days=1;
    while(days<10){
        peach+=1;
        peach*=2;
        days++;
    }
    printf("%d",peach);
    return 0;
}