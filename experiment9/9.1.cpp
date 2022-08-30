#include <stdio.h>
void sort_student(struct student A[],int n);
struct student{
    char Std_ID[10];
    char Std_Name[10];
    double math;
    double english;
    double chinese;
    double sum;
    double avg;
};
int main(){
    //Define
    student class1[6];
    double sum_math=0,sum_eng=0,sum_chi=0;
    double avg_math,avg_eng,avg_chi;

    for(int i=0;i<6;i++){
        //Input
        printf("Input student%d's information:\n",i+1);
        printf("ID:__________\b\b\b\b\b\b\b\b\b\b");
        scanf("%s",class1[i].Std_ID);
        printf("Name:__________\b\b\b\b\b\b\b\b\b\b");
        scanf("%s",class1[i].Std_Name);
        printf("Math:___\b\b\b");
        scanf("%lf",&class1[i].math);
        printf("English:___\b\b\b");
        scanf("%lf",&class1[i].english);
        printf("Chinese:___\b\b\b");
        scanf("%lf",&class1[i].chinese);
        //Calculate
        class1[i].sum=class1[i].math+class1[i].english+class1[i].chinese;
        class1[i].avg=class1[i].sum/3.0;
        sum_math+=class1[i].math;
        sum_eng+=class1[i].english;
        sum_chi+=class1[i].chinese;
    }
    printf("Average score:\n    Math:%lf\n  English:%lf\n   Chinese:%lf\n",avg_math,avg_eng,avg_chi);
    //sort
    sort_student(class1,6);
    printf("Top student is:\n");
    for(int i=0;i<6;i++){
        if(i==0){printf("%s\n%s\n%lf\n%lf\n%lf\n",class1[i].Std_ID,class1[i].Std_Name,class1[i].math,class1[i].english,class1[i].chinese);}
        else{
            if(class1[i].sum==class1[0].sum){printf("%s\n%s\n%lf\n%lf\n%lf\n",class1[i].Std_ID,class1[i].Std_Name,class1[i].math,class1[i].english,class1[i].chinese);}
        }
    }
    return 0;
}

void sort_student(struct student A[],int n){
    for(int i=0;i<n;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(A[j].sum>A[max].sum){max=j;}
        }
        student t=A[max];A[max]=A[i];A[i]=t;
    }
}