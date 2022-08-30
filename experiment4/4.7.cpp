#include <stdio.h>
int main(){
    int x=101;
    while(x<1000){
        int a,b,c;
        a=x/100;
        b=(x/10)%10;
        c=x%10;
        if(a*a*a+b*b*b+c*c*c==x){
            printf("%d ",x);
            x++;
        }
        else{x++;}
    }
    printf("\b");
    return 0;
}