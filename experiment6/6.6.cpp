#include <stdio.h>

int gcd(int a,int b);
void swap(int &a,int &b);

int main(){
    int a,b;
    printf("Input a, b to calculate lcm:\n");
    scanf("%d%d",&a,&b);
    //int x;x=gcd(a,b);
    int lcm;lcm=a*b/gcd(a,b);
    printf("lcm=%d\n",lcm);
    return 0;
}

int gcd(int a,int b){
    if(a<b){swap(a,b);}
    int k;
    while(a%b){
        k=a%b;a=b;b=k;
    }
    return b;
}
void swap(int &a,int &b){
    int t;
    t=a;a=b;b=t;
}






























