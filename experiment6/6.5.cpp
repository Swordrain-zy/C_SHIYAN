#include <stdio.h>
#include <stdlib.h>
char* Str_delete(char *s,int k,int n);

int main(){
    char s[100];int k,n;
    printf("Input a string(length<100):\n");
    scanf("%s",s);
    printf("Input k and n:\n");
    scanf("%d%d",&k,&n);
    char*s1=Str_delete(s,k,n);
    printf("%s\n",s1);
    return 0;
}

char* Str_delete(char *s,int k,int n){
    char*s1;s1=(char*)malloc(100*sizeof(char));
    for(int i=0;i<k;i++){
        s1[i]=s[i];
    }
    for(int i=k+n;s1[i];i++){
        s1[k++]=s[i];
    }
    s1[k]='\0';
    return s1;
}