#include<iostream>
#include<stdio.h>
using namespace std;
#define Maxsize 50
int input(double x[Maxsize], double f[Maxsize], double df[Maxsize], long n);
int main(){
    double x[Maxsize], f[Maxsize], df[Maxsize], _x, _y, l, dl;
    long n,i,j;
    cout<<"\nplease input the number of the interpolation node: ";
    cin>>n;
    input(x,f,df,n);
    cout<<"\nplease input the interpolation point:";
    cin>>_x;
    _y = 0;
    for(i=0; i<n-1; i++){
        l=1;
        for(j=0; j<=n-1;j++){
            if(j!=i){
                l*=(_x-x[j])/(x[i]-x[j]);
            }
        }
        dl=0;
        for(j=0;j<=n-1;j++){
            if(j!=0){
                dl+=1/(x[i]-x[j]);
            }
        }
        _y+=(1-2*dl*(_x-x[i]))*l*l*f[i]+(_x-x[i])*l*l*df[i];
    }
    printf("\nthe interpolation point(x,y) = (%lf,%lf)",_x,_y);
    return 0;
}
int input(double x[Maxsize], double f[Maxsize], double df[Maxsize], long n){
    long i;
    for(i=0; i<=n-1; i++){
        printf("\nplease input the interpolation node x[%ld], f[%ld], df[%ld]:",i,i,i);
        cin>>x[i]>>f[i]>>df[i];
//        cout<<x[i]<<f[i]<<df[i];
    }
    return 0;
}