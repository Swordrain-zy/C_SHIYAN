#include <stdio.h>
#include <math.h>

int Bin_convert(char *s);

int main(){
    char bin[100];
    printf("Input a binary integer:\n");
    scanf("%s",bin);
    printf("Ans:%d\n",Bin_convert(bin));
    return 0;
}

int Bin_convert(char *s){
    int cnt=0,x=0;int p;
    for(p=0;s[p]!='\0';p++){
    }
    for(p-=1;p>=0;p--){
        if(s[p]=='1'){x+=pow(2,cnt++);}
        else{cnt++;}
    }
    return x;
}