#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
int strlen(char *s1);
void Sort_Str(char *s[]);

int main(){
    char *s[10];
    for(int i=0;i<10;i++){
        s[i]=(char*)malloc(MAXSIZE*sizeof(char));//give space to every point at first
        scanf("%s",s[i]);
    }
    Sort_Str(s);
    for(int i=0;i<10;i++){
        printf("%s",s[i]);
        printf("\n");
    }
    return 0;
}

int strlen(char *s1){
    int i=0;
    for(;s1[i]!='\0';i++){}
    return i;
}

void Sort_Str(char *s[]){
    for(int i=0;i<9;i++){
        int min=i;
        for(int j=i+1;j<10;j++){
            if(strlen(s[j])<strlen(s[min])){min=j;}
        }
        //swap
        char *a;a=s[i];s[i]=s[min];s[min]=a;
    }
}
