#include <stdio.h>
int main(){
    int x;
    int pos=0,neg=0,zero=0;
    printf("please input 20 integer:\n");
    for(int i=0;i<20;i++){
        scanf("%d",&x);
        if(x==0){zero++;}
        else if(x<0){neg++;}
        else{pos++;}
    }
    printf("pos:%d,neg:%d,0:%d\n",pos,neg,zero);
    return 0;
}