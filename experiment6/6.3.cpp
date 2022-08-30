#include <stdio.h>
#include <stdlib.h>
void Min_Max(int **a,int m,int n);

int main(){
    int m,n;
    printf("Input M,N as martix's shape:\n");
    scanf("%d%d",&m,&n);
    printf("Input martix:\n");
    int **a=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        a[i]=(int*)malloc(n*sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Difference:\n");
    Min_Max(a,m,n);
    return 0;
}

void Min_Max(int **a,int m,int n){
    int max,min;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0){min=max=a[j][i];continue;}
            if(a[j][i]>max){max=a[j][i];}
            else if(a[j][i]<min){min=a[j][i];}
            else{continue;}
        }
        printf("%d ",max-min);
    }
}