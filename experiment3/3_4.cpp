#include <stdio.h>
int main(){
    double income=0,interest=0;char type;
    scanf("%lf",&income);
    if(income>=1000&&income<2000){type='A';}
    else if(income>=2000&&income<4000){type='B';}
    else if(income>=4000&&income<6000){type='C';}
    else if(income>=6000){type='D';}
    else{type='E';}
    switch(type){
        case 'A':interest=(income-1000)*0.05;break;
        case 'B':interest=50+(income-2000)*0.1;break;
        case 'C':interest=50+200+(income-4000)*0.15;break;
        case 'D':interest=50+200+300+(income-6000)*0.2;break;
        default:break;
    }
    printf("%.2lf\n",interest);
    return 0;
}