#include <stdio.h>
#include <math.h>


void postive(double delta,double a,double b);
void negative();
void zero(double a,double b);

int main(){
    double a,b,c;
    printf("Input a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    double delta;
    delta=b*b-4*a*c;
    if(delta>0){postive(delta,a,b);}
    else if(delta==0){zero(a,b);}
    else{negative();}
    return 0;
}

void postive(double delta,double a,double b){
    double x1,x2;
    x1=(-b)+sqrt(delta)/2*a;
    x2=(-b)-sqrt(delta)/2*a;
    printf("x1=%.2lf,x2=%.2lf\n",x1,x2);
}

void zero(double a,double b){
    double x;
    x=(-b)/2*a;
    printf("x1=x2=%.2lf\n",x);
}

void negative(){
    printf("None real number solutions\n");
}

