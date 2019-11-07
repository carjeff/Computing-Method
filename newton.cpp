#include<iostream>
#define maxsize 50
using namespace std;
void input (double x[maxsize],double f[maxsize][maxsize],long n);
int main(){
    double x[maxsize],f[maxsize][maxsize],_x,_y;
    long n,j,i;
    cout<<"\nplease input the number of interpolation node: ";
    cin>>n;
    input(x,f,n);
    cout<<"\nplease input the interpolation point : ";
    cin>>_x;
    for(j=1;j<=n-1;j++){
        for(i=j;i<=n-1;i++){
            f[i][j]=(f[i][j-1]-f[i-1][j-1])/(x[i]-x[i-j]);
        }
    }
    _y=f[n-1][n-1];
    for(i=n-2;i>=0;i--){
        _y=f[i][i]+(_x-x[i])*_y;
    }
    printf("\n interpolation point (x,y)= (%lf,%lf)",_x,_y);
    return 0;
     
}

void input (double x[maxsize],double f[maxsize][maxsize],long n){
    long i;
    for(i=0;i<=n-1;i++){
        printf("\nplease input the interpolation node x[%ld],y[%ld]",i,i);
        cin>>x[i]>>f[i][0];
    }
}