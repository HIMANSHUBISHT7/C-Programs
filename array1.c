// find three gratest elements in an array.
#include<stdio.h>
int main(){
    int a[]={8,10,7,55,65,70,1};
    int m1,m2,m3, t = 0, l = 0 ;
    m1 = a[0];
    m2 = a[1];
    m3 = a[2];

    for(int i=3;i<7;i++){
        
        if (a[i]>m3){
            m3 = a[i];
        }
        if (m3>m2){
            l = m2;
            m2 = m3;
            m3 = l;
        }
        if (m2>m1){
            t = m1;
            m1 = m2;
            m2 = t;
        }
    }
     
    printf("gratest three elemets of an array are : %d %d %d",m1,m2,m3);
    return 0;
}