#include<stdio.h>
// print sum of five subject marks and find percentage.
int main (){
    int m1,m2,m3,m4,m5;
    int sum = 0;
    float average = 0;
    printf("enter math marks : ");
    scanf("%d",& m1);
    printf("enter sst marks : ");
    scanf("%d",& m2);
    printf("enter science marks : ");
    scanf("%d",& m3);
    printf("enter hindi marks : ");
    scanf("%d",& m4);
    printf("enter english marks : ");
    scanf("%d",& m5);

    printf("total marks : %d\n", sum = m1+m2+m3+m4+m5);
    printf("total percentage : %.2f\n", average = sum*100/500);
    return 0;
}