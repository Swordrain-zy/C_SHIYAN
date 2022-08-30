#include <stdio.h>
#include <stdlib.h>
struct item{
    int mass;
    int price;
};
void InsertSort(item A[],int n);
void swap(item &a,item &b);
int main(){
    int n;scanf("%d",&n);
    item *A=(item*)malloc(n*sizeof(item));
    int i=0;
    for(;i<n;i++){
        scanf("%d",&A[i].mass);
    }
    for(i=0;i<n;i++){
        scanf("%d",&A[i].price);
    }
    InsertSort(A,n);
    for(i=0;i<n;i++){
        printf("m:%d p:%d\n",A[i].mass,A[i].price);
    }
    return 0;
}

void InsertSort(item A[],int n){
	int i,j;item temp;
	for(i=1;i<n;i++){
		if(A[i].mass<A[i-1].mass){
			temp=A[i]; 
			for(j=i-1;j>=0 && A[j].mass>temp.mass;--j){
				A[j+1]=A[j];
			}
			A[j+1]=temp;
		}
        int k=i;
        while(A[k].mass==A[k-1].mass){
            if(A[k].price>A[k-1].price){swap(A[k],A[k-1]);}
            k--;
        }
	}
}
void swap(item &a,item &b){
    item temp;temp=a;a=b;b=temp;
}