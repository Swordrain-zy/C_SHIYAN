#include <stdio.h>
int main(){
    int number;
    printf("Please input an integer:\n");
    scanf("%d",&number);
    printf("Oct:%o Hex:%x %d\n",number,number,number%5);
    return 0;
}
