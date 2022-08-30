#include <stdio.h>
int main(){
    int times=0;double height=100;double route=0;
    while(times<10){
        route+=height;
        height/=2;
        route+=height;
        times++;
    }
    route-=height;
    printf("%lf %lf\n",route,height);
    return 0;
}