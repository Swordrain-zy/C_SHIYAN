#include <stdio.h>
#define NUMBER 26
int main(){
    char Input_ch,Output_ch;
    printf("Input a char: ");
    //scanf("%c",&Input_ch);
    while((Input_ch=getchar())!='\n'){
        if(Input_ch>=97){Output_ch=97+((Input_ch-97+6)%NUMBER);}
        else{Output_ch=65+((Input_ch-65+6)%NUMBER);}
        printf("%c",Output_ch);
    }
    return 0;
}