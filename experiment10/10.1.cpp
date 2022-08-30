#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 3

struct Student_Score{
    char Name[20];
    char ID[6];
    char Native[10];
    double math,sci,eng;
    double avg;
};
Student_Score List[N];
int main(){
    FILE *fp1,*fp2;
    //read info1
    if((fp1=fopen("C://Users/10984/Desktop/1.txt","r"))==NULL){
        printf("File can not be opened.\n");
        exit(0);
    }
    for(int i=0;i<N;i++){
        fscanf(fp1,"%s %s %s\n",&List[i].Name,&List[i].ID,&List[i].Native);
    }
    for(int i=0;i<N;i++){
        scanf("%lf%lf%lf",&List[i].math,&List[i].sci,&List[i].eng);
        List[i].avg=(List[i].math+List[i].sci+List[i].eng)/3.0;
    }

    if((fp2=fopen("C://Users/10984/Desktop/stu_info2.txt","w"))==NULL){
        printf("File can not be opened.\n");
        exit(0);
    }

    for(int i=0;i<N;i++){
        fprintf(fp2,"%s\t%s\t%s\t%lf\t%lf\t%lf\t%lf\n"
        ,List[i].Name,List[i].ID,List[i].Native,List[i].math,List[i].sci,List[i].eng,List[i].avg);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}