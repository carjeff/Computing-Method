//1-7阶牛顿科特斯公式
#include<iostream>
using namespace std;
#define MAX 7
void input(double a, double b, double f[MAX+1], long n){
    double h;
    h = (b - a) / (n-1);
    cout<<"\nPlease input the value of the node ordinate: ";
    for(long i = 0 ; i < n-1; i++){
        cin>>f[i];
    }
}

int main(){
    long c[MAX][MAX/2+2] = {{2,1},{6,1,4},{8,1,3},{90,7,32,12},{288,19,75,50},{840,41,216,27,272},{17280,751,3577,1323,2989}};
    double a, b, f[MAX+1], integral;
    long n ;
    cout<<"\nPlease input the integrating range(a , b): ";
    cin>>a>>b;
    cout<<"\nPlease input the number of node: ";
    cin>>n;
    input(a,b,f,n);
    integral = 0;
    for(long i =0; i< n/2; i++){
        integral += (f[i]+f[n-i-1]) * c[n-2][i+1]/c[n-2][0];
    }
    if (n%2){
        integral += f[n/2] * c[n-2][n/2+1]/c[n-2][0];
    }
    integral *= (b-a);
    printf("\n the value of intergrating is %lf", integral);
    return 0;
}