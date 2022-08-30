#include <stdio.h>
int main(){
    int a[10];
    printf("Input 10 integers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        int min=i;
        for(int cnt=i+1;cnt<10;cnt++){
            if(a[cnt]<a[min]){min=cnt;}
        }
        int t=a[min];
        a[min]=a[i];
        a[i]=t;
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}