#include <stdio.h>
int main(){
    int a,b,c,min;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<=b){min=a;}else{min=b;}
    if(c<min){min=c;}
    printf("min=%d",min);
    return 0;
}
