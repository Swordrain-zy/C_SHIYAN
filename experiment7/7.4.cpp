#include <stdio.h>
void List_Circular(int *a,int m,int n);
int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int m,n=10;
    printf("Input m:\n");
    scanf("%d",&m);
    List_Circular(a,m,n);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

void List_Circular(int *a,int m,int n){
    int *p;p=&a[n-m];
    int x=n-m;
    for(int i=0;i<x;i++){
        p[m++]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=p[i];
    }
}