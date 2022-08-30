#include <stdio.h>
double function_1(double x);
int main(){
    double low=-10,high=10,mid;
    mid=(low+high)/2;
    while(function_1(mid)!=0){
        
    }
    return 0;
}
double function_1(double x){
    double ans;
    ans=2*x*x*x-4*x*x+3*x-6;
    return ans;
}