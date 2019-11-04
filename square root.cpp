//计算根号a的值
#include<iostream>
using namespace std;
int main(){
    cout<<"please enter a root number";
    int a;
    cin>>a;
    double x=1.0;
    for(int i=0;i<=10;i++)
    {
        x=(x+a*1.0/x)/2;
    }
    cout<<"the square of a is "<<x;
    return 0;

}