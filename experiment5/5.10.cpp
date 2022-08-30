#include <stdio.h>
int main(){
    int a[10];a[0]=1;
    for(int i=0;i<10;i++){
        int t=-1;
        for(int j=0;j<=i;j++){
            printf("%d ",a[j]);
            if(j!=0&&t==-1){
                t=a[j];
                a[j]=a[j-1]+a[j];

            }
            else if(j!=0){
                int t1=t;
                t=a[j];
                a[j]=a[j]+t1;
            }
        }
        printf("\n");
        a[i+1]=1;
    }
    return 0;
}