#include <stdio.h>
int main(){
    int n=101,mask=0,num=0;
    while(n<1000){
        if(n%5!=0){n++;}
        else{
            mask=n/100+(n/10)%10+n%10;
            if(mask==9){num++;}
            n++;
        }
    }
    printf("%d\n",num);
    return 0;
}