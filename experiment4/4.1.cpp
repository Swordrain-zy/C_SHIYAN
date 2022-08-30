#include <stdio.h>
int main(){
    double e=0,cnt=1,mult=1,elem=1;
    while(elem>10e-10){
        e+=elem;
        cnt++;
        mult*=cnt;
        elem=1/mult;
    }
    e+=1;
    printf("%.9lf\n",e);
    return 0;
}