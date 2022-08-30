#include <stdio.h>
int find(int*p,int n,int x);
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Input a key to serach:\n");
    int b;scanf("%d",&b);
    int t=find(a,10,b);
    printf("%d\n",t);
    return 0;
}

int find(int *p,int n,int x){
    for(int i=0;i<n;i++){
        if(p[i]==x){return 1;}
    }
    return 0;
}