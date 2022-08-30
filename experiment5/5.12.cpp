#include <stdio.h>
#include <stdlib.h>
void Array_left(int *a,int maxsize);
int main(){
    //input
    int n;
    printf("Input an integer as the shape of martix(n*n):\n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*(sizeof(int)));
    printf("Input %d integers:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //build martix
    int **b=(int**)malloc(n*(sizeof(int*)));
    for(int i=0;i<n;i++){
        b[i]=(int*)malloc(n*(sizeof(int)));
        for(int j=0;j<n;j++){
            b[i][j]=a[j];
        }
        Array_left(a,n);
    }

    //output martix:
    printf("The martix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//array change
void Array_left(int *a,int maxsize){
    int x=a[0];
    for(int i=0;i<maxsize-1;i++){
        a[i]=a[i+1];
    }
    a[maxsize-1]=x;
}