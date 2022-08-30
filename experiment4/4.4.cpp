#include <stdio.h>
#include <math.h>
bool Is_Prime(int x);
int main(){
    int n=2;
    while(n<1000){
        if(n<10){
            if(Is_Prime(n)){printf("%d ",n);n++;}
            else{n++;}
        }
        else if(n<100){
            if((n/10)!=(n%10)){n++;}
            else{
                if(Is_Prime(n)){printf("%d ",n);n++;}
                else{n++;}
            }
        }
        else{
            if((n/100)!=(n%10)){n++;}
            else{
                if(Is_Prime(n)){printf("%d ",n);n++;}
                else{n++;}
            } 
        }
    }
    printf("\b");
    return 0;
}
bool Is_Prime(int x){
    bool tag=true;
    int a=sqrt(x);
    for(int i=2;i<=a;i++){
        if(x%i==0){tag=false;break;}
    }
    return tag;
}