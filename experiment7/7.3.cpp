#include <stdio.h>
void Martix_Trans(int (*a)[3]);

int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    Martix_Trans(a);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }    
    return 0;
}

void Martix_Trans(int (*a)[3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<j){
                int t;t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
            }
        }
    }
}