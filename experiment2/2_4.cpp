#include <stdio.h>
int main(){
    double Temp_F,Temp_C;
    printf("Please input a Fahrenheit scale:");
    scanf("%lf",&Temp_F);
    Temp_C=5.0/9*(Temp_F-32);
    printf("Centigrade:%.2lf℃\n",Temp_C);
    return 0;
}