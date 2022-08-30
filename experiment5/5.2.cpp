#include <stdio.h>
int main(){
    double a[10];
    double sum=0,max,min,avg;
    printf("Input 10 score (0-100):\n");
    for(int i=0;i<10;i++){
        scanf("%lf",&a[i]);
        sum+=a[i];
        if(i==0){max=min=a[i];}
        else{
            if(a[i]>max){max=a[i];}
            else if(a[i]<min){min=a[i];}
        }
    }
    sum=sum-max-min;
    avg=sum/8;
    printf("final score:%.2f\n",avg);
    return 0;
}