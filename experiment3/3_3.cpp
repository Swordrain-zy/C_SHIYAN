#include <stdio.h>
int main(){
    int a,b,c;int max,min;
    scanf("%d%d%d",&a,&b,&c);
    min=(a<b)?(a):(b);
    min=(c<min)?(c):(min);
    printf("min=%d ",min);
    max=(a>b)?(a):(b);
    max=(c>max)?(c):(max);
    printf("max=%d\n",max);
    return 0;
}