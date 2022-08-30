#include <stdio.h>
void sort(int *a,int *b,int *c);
int main(){
    int a,b,c;
    printf("Input 3 integer:\n");
    scanf("%d%d%d",&a,&b,&c);
    sort(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    return 0;
}

void sort(int *a,int *b,int *c){
    int t;
    if(*b<*a){t=*b;*b=*a;*a=t;}
    if(*c<*a){t=*c;*c=*a;*a=t;}
    if(*c<*b){t=*c;*c=*b;*b=t;}
}