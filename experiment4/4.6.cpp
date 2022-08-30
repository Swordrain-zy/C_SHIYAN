#include <stdio.h>
int main(){
    int man=1,woman;
    while(man*man<1053){man++;}
    do{
        man-=1;
        woman=1053-man*man;
    }while(woman*woman+man!=873);
    printf("%d,%d\n",man,woman);
    return 0;
}