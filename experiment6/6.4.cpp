#include <stdio.h>
#include <math.h>
void Prime_follow(int a);
bool isprime(int x);
int main(){
    int a;
    printf("Input an integer:\n");
    scanf("%d",&a);
    Prime_follow(a);
    return 0;
}

void Prime_follow(int a){
    a+=1;
    while(!isprime(a)){a++;}
    printf("Next prime is %d.\n",a);
}
bool isprime(int x){
    bool tag=true;
    for(int i=2;i<sqrt(x);i++){
        if(x%i==0){tag=false;}
    }
    return tag;
}