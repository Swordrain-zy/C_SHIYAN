#include <stdio.h>
//only one max&min value in each line and array.
int max(int a[][4],int n);
int min(int a[][4],int n);
int main(){
    int b[5][4];bool tag=false;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        int x=max(b,i);
        int y=min(b,x);
        if(i==y){printf("<%d,%d>\n",y,x);tag=true;}
    }
    if(!tag){printf("No result\n");}
    return 0;
}

int max(int a[][4],int n){
    int max=0;
    for(int i=1;i<4;i++){
        if(a[n][i]>a[n][max]){max=i;}
    }
    return max;
}
int min(int a[][4],int n){
    int min=0;
    for(int i=1;i<5;i++){
        if(a[i][n]<a[min][n]){min=i;}
    }
    return min;
}