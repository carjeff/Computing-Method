#include<iostream>
using namespace std;
#define MAXSIZE 50
void input(double x[MAXSIZE],double y[MAXSIZE],long n );
int main(){
    double x[MAXSIZE],y[MAXSIZE],_x,_y,t;
    long n,i,j;
    cout<<"\n���ӽ�";
    scanf("%ld",&n);
    input(x,y,n);
    cout<<"\n�������ֵ�ￄ1�7:";
    cin>>_x;
    _y=0;
    for(i=0;i<n-1;i++){
        t=1;
        for(j=0;j<=n-1;j++)
            if(j!=i)
                t*=(_x-x[j])/(x[i]-x[j]);
        _y+=t*y[i];
    }
    printf("\n��ֵ��(x,y)=(%lf,%lf).",_x,_y);
    return 0;
}

void input(double x[MAXSIZE],double y[MAXSIZE],long n){
    long i;
    for(i=0;i<=n-1;i++){
        printf("\n�������ֵ�ڵ�x[%ld],y[%ld]:",i,i);
		cin>>x[i]>>y[i]; 
    }
}
