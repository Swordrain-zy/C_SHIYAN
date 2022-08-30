#include <stdio.h>
void reverse(int n);
int main(){
    int n;
    printf("Input an integer:\n");
    scanf("%d",&n);
    reverse(n);
    return 0;
}

void reverse(int n){
    int cnt=0,mask=1;
    int a[10];
    while(n/mask!=0){
        if(n/mask>=10){
            a[cnt++]=(n/mask)%10;
        }
        else{a[cnt++]=n/mask;}
        mask*=10;
    }
    a[cnt]=-1;
    a[0]=n%10;
    for(int i=0;a[i]!=-1;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}