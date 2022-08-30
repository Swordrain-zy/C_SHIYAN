#include <stdio.h>
#include <math.h>
int main(){
    double x,y;
    printf("x= ");
    scanf("%lf",&x);
    if(x>0&&x<1){
        y=x;
    }
    else if(x>=3&&x<=4){
        y=x+2;
    }
    else{
        y=sin(x*x);
    }
    printf("y=%.2lf\n",y);
    return 0;
}