#include<iostream>
using namespace std;
#define max 50
void input(double x[max],double y[max],long n ){
    for(long i = 0; i<= n-1; i++){
        printf("\nPlease input the interpolation node:x[%ld],y[%ld]:",i,i);
        cin>>x[i]>>y[i]; 
    }
}

double lagrange(double x[max],double y[max],long n,double a, double b){
//    cout<<x[0]<<' '<<x[1]<<' '<<x[2]<<endl;
//    cout<<y[0]<<' '<<y[1]<<' '<<y[2]<<endl;
//    cout<<a;
//    cout<<b;
    for(long i=0;i<=n-1;i++){
        double t=1;
        for(long j=0;j<=n-1;j++)
            if(j!=i)
                t*=(a-x[j])/(x[i]-x[j]);
        cout<<t<<endl;
        b+=t*y[i];
    }
    return b;
}
int main(){
    double x[max],y[max],a,b;
    long n;
    cout<<"\nPlease input the number of the interpolation node: ";
    scanf("%ld",&n);
    input(x,y,n);
    cout<<"\nPlease input the interpolation point: ";
    cin>>a;
    b=0;
    b=lagrange(x,y,n,a,b);
    printf("\nthe interpolation point(x,y)=(%lf,%lf).",a,b);
    return 0;
}
