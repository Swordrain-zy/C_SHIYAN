#include <stdio.h>
int main(){
    int i,j,m,n;
    i=8;j=10;
    m=++i;
    n=j++;// m=i++;n=++j;
    //m+=++i;n+=j++;<---->m=m+i;i++;j++;n=n+j;
    printf("%d %d %d %d\n",i,j,m,n);
    //printf("%d,%d\n",i++,j++);
    //printf("%d,%d\n",++i,++j);
    //printf("%d,%d,%d,%d\n",i,j,i++,j++);
}