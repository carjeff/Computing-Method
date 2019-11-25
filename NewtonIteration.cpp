#include<iostream>
#include<math.h>
using namespace std;

double f(double x){
    return x*exp(x) - 1; 
}
double df(double x){
    return exp(x) + x*exp(x); 
}

int main(){
    double accuracy;
    cout<<"\nPlease input the accuracy: ";
    cin>>accuracy;
    int maxi;
    cout<<"\n Please input the max time: ";
    cin>>maxi;
    double x1;
    cout<<"\nPlease input the interation initial value: ";
    cin>>x1;
    double x2=0;
    int i;
    for(i=0; i<maxi;i++){
        x2 = x1;
        double fo = f(x2);
        double dfo = df(x2);
        x1 = x2-fo/dfo;
        if(fabs(x2-x1)<=accuracy){
            break;
        }
    }
    if(i<maxi){
        cout<<"\nThe root of equation f(x) = 0 is :"<<x1<<endl;
    }
    else
    {
        cout<<"the time is beyound the limit."<<endl;
    }
    return 0;
}   