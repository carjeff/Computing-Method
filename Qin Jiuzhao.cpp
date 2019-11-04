#include<stdio.h>
#include<string.h>
#define N 100
int main(){
    int n, k ,i;
    float a[N],x;
    double v;
    printf("please input n=");
    scanf("%d",&n);
    printf("please input fator a0,a1..");
    for(i=0;i<=n;i++){
        scanf("%f",&a[i]);
    }
    printf("please input x=");
    scanf("%f",&x);
    v=a[0];
    for(k=1;k<=n;k++)
    {
        v=x*v+a[k];
    }
    printf("the answer is v=%lf",v);
    return 0 ;

}