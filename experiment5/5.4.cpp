#include <stdio.h>
int main(){
    int a[3][4];
    int sump=0,sumn=0;
    printf("Input an martix(3X4):\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]>=0){sump+=a[i][j];}
            else{sumn+=a[i][j];}
        }
    }
    printf("%d %d",sump,sumn);
    return 0;
}