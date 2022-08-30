#include <stdio.h>
int main(){
    int a[20]={1,2,3,4,5
              ,6,7,8,9,10
              ,11,12,13,14
              ,15,16,17,18,19,20};
    int x;
    printf("Input an integer you want to search:_\b");
    scanf("%d",&x);
    int low=0,high=19,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(x==a[mid]){break;}
        else if(x>a[mid]){low=mid+1;}
        else{high=mid-1;}
    }
    if(low>high){printf("No found\n");}
    else{printf("pos:%d\n",mid);}
    return 0;
}