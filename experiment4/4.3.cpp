#include <stdio.h>
int main(){
    int m;int cnt=0,sum=0,num,max,min;
    double avg;
    printf("how many numbers do you want to input:");
    scanf("%d",&m);
    while(cnt<m){
        scanf("%d",&num);
        if(cnt==0){max=min=num;}
        else{
            if(num>max){max=num;}
            if(num<min){min=num;}
        }
        sum+=num;
        cnt++;
    }
    avg=sum/m;
    printf("%d,%d,%.2lf\n",max,min,avg);
    return 0;
}